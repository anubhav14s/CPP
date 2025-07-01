#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float a, b, c, d;
    cout << "Enter the value of a,b,c" << endl;
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << "Roots are imaginary" << endl;
    }
    else if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << (-b + sqrt(d)) / (2 * a);
    }
    else
    {
        cout << "Roots are real and unequal" << endl;
        cout << -b + sqrt(d) / (2 * a) << (-b - sqrt(d)) / (2 * a);
    }
    return 0;
}