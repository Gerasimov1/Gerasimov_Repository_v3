#include <iostream>
#include <string>
#include <Math.h>
/**
    @file       main.cpp
    @brief      ��� ���������
    @copyright  ����
    @author     ��������� �.�.
    @date       22-05-2024
    @version    1.0.0
*/
using namespace std;
/// ������� ��� �������� ������ ����������
/**������� � ���� ��� �������� ����������
\param num_X �������� ����������
*/
bool UserInput(string input)
{
    if (input.empty()) return false;
    try
    {
        double number = stod(input);
        if (number <= 0) return false;
    }
    catch (...)
    {
        return false;
    }
    return true;
}
void EnterX(double& num_X)
{
    string ch;
//    cout << "Input X" << endl;
    getline(cin, ch);
    while (!UserInput(ch)) {
        cout << "Input X" << endl;
        getline(cin, ch);
    }
     num_X = stod(ch);
}
/// ������� ��� �������� ������ ����������
/**������� � ���� ��� �������� ����������
\param num_Y �������� ����������
*/
void EnterY(double& num_Y)
{
    string ch;
    getline(cin, ch);
    while (!UserInput(ch)) {
        cout << "Input Y" << endl;
        getline(cin, ch);
    }
     num_Y = stod(ch);
}
/// ������� ��� ���������� �������� ��������������� 
/**������� �������� ��������� ��������������� ���� ����������
\param num_X ������ ����������
\param num_Y ������ ����������
*/
double ArtimicMean(double num_X, double num_Y)
{
    return (num_X + num_Y) / 2;
}
/// ������� ��� ���������� �������� ��������������� 
/**������� �������� ��������� ��������������� ���� ����������
\param num_X ������ ����������
\param num_Y ������ ����������
*/
double GeometricMean(double num_X, double num_Y)
{
    return sqrt(num_X * num_Y);
}
int main()
{
    int n = 0;   ///<����� ����������� ������
    double x, y; ///<��� ����� ��� ���������� ��������
    double sred=0, geom=0;
    bool funX = false, funY = false;
    /// ����� ������ ������ ��������
    /** ������� ������ ��������� ��������
    */
    do {
        cout << "1.Enter a number X" << endl;
        cout << "2.Enter a number Y" << endl;
        cout << "3.Calculate arithmetic mean" << endl;
        cout << "4.Calculate geometric mean" << endl;
        cout << "Please enter number of the desired function or 0 if you want close the app:" << endl;
        /// ����� ������
        /** ���� ������ ��������� ��������
        */
        cin >> n;
        /// ���������� ��������
        /** �������� �������� ��������� �������� � ����������� �� ���������� ������ ��������
        */
        switch (n)
        {
        case 1:
            EnterX(x);
            funX = true;
            break;
        case 2:
            EnterY(y);
            funY = true;
            break;
        case 3:
            if (funX==true &&funY==true)
            {
                sred = ArtimicMean(x, y);
                cout << "Srednee znachenie:" << sred << endl;
            }
            else {
                cout << "Vvedite X and Y" << endl;
            }
            break;
        case 0:
            break;
        case 4:
            if (funX == true && funY == true)
            {
                geom = GeometricMean(x, y);
                cout << "Srednee geometricheskoe:" << geom << endl;
            }
            else {
                cout << "Vvedite X and Y" << endl;
            }
            break;
        default:
            cout << "Error vvoda"<<endl;
        }
    } while (n!=0);
}