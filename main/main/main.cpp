#include <iostream>
#include <string>
#include <Math.h>
/**
    @file       main.cpp
    @brief      Код программы
    @copyright  ВоГУ
    @author     Герасимов Д.Ю.
    @date       22-05-2024
    @version    1.0.0
*/
using namespace std;
/// Функция для введения первой переменной
/**Заходит в цикл где вводится переменная
\param num_X вводимая переменная
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
/// Функция для введения второй переменной
/**Заходит в цикл где вводится переменная
\param num_Y вводимая переменная
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
/// Функция для нахождения среднего арифметического 
/**Выводит значение среденего арифметического двух переменных
\param num_X первая переменная
\param num_Y вторая переменная
*/
double ArtimicMean(double num_X, double num_Y)
{
    return (num_X + num_Y) / 2;
}
/// Функция для нахождения среднего геометрического 
/**Выводит значение среденего геометрического двух переменных
\param num_X первая переменная
\param num_Y вторая переменная
*/
double GeometricMean(double num_X, double num_Y)
{
    return sqrt(num_X * num_Y);
}
int main()
{
    int n = 0;   ///<Номер выбираемого пункта
    double x, y; ///<Два числа для выполнения дейтсвий
    double sred=0, geom=0;
    bool funX = false, funY = false;
    /// Вывод выбора номера действия
    /** Выводит список возможных действий
    */
    do {
        cout << "1.Enter a number X" << endl;
        cout << "2.Enter a number Y" << endl;
        cout << "3.Calculate arithmetic mean" << endl;
        cout << "4.Calculate geometric mean" << endl;
        cout << "Please enter number of the desired function or 0 if you want close the app:" << endl;
        /// Выбор номера
        /** Ввод номера выбраного действия
        */
        cin >> n;
        /// Применение действия
        /** Условный оператор выполняет действия в зависимости от введенного номера действия
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