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
int GeometricMean(double num_X, double num_Y)
{

}
int main()
{
    int n = 0;
    double x, y, arg, geom;
    cout << "1.Enter a number X";
    cout << "2.Enter a number Y";
    cout << "3.Calculate arithmetic mean";
    cout << "4.Calculate geometric mean";
    cout << "Please enter number of the desired function or 0 if you want close the app:";
    cin >> n;
    switch (n)
    {
        case 1:
            EnterY(y);
        case 2:
            EnterY(y);
        case 3:
            ArtimicMean(x, y);
        case 4:
            GeometricMean(x, y);
        default:
            cout << "Error";
    }
}