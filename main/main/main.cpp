#include <iostream>
using namespace std;
void EnterX(double &num_X)
{
    
}
void EnterY(double &num_Y)
{

}
void ArtimicMean(double num_X, double num_Y )
{
    
}
void GeometricMean(double num_X, double num_Y)
{
    cout<< "Srednee geometricheskoe:"<<sqrt(num_X*num_Y)<<endl;
}
int main()
{
    int n = 0;
    double x, y;
    cout << "1.Enter a number X"<< endl;
    cout << "2.Enter a number Y" << endl;
    cout << "3.Calculate arithmetic mean" << endl;
    cout << "4.Calculate geometric mean" << endl;
    cout << "Please enter number of the desired function or 0 if you want close the app:";
    cin >> n;
    switch (n)
    {
        case 1:
            EnterX(x);
        case 2:
            EnterY(y);
        case 3:
            ArtimicMean(x, y);
        case 4:
            GeometricMean(x, y);
            break;
        default:
            cout << "Error";
    }
}