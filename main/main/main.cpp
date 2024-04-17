#include <iostream>
using namespace std;
void EnterX(double &num_X)
{
    do
    {
        cin >> num_X;
    }
    while (num_X <= 0);
}
void EnterY(double &num_Y)
{
    do
    {
        cin >> num_Y;
    } 
    while (num_Y <= 0);
}
void ArtimicMean(double num_X, double num_Y )
{

}
void GeometricMean(double num_X, double num_Y)
{
    
}
int main()
{
    int n = 0;
    double x, y;
    cout << "1.Enter a number X"<<endl;
    cout << "2.Enter a number Y" << endl;
    cout << "3.Calculate arithmetic mean" << endl;
    cout << "4.Calculate geometric mean" << endl;
<<<<<<< HEAD
    cout << "Please enter number of the desired function or 0 if you want close the app:";
=======
    cout << "Please enter number of the desired function or 0 if you want close the app:" << endl;
>>>>>>> 586a23e7a409c085b8c1a73364eed1e2c0109bf3
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
        default:
            cout << "Error";
    }
}