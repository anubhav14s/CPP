#include <iostream>
using namespace std;
int main()
{
    int num, dig;
    cout << "Enter the number";
    cin >> num;
    while (num != 0)
    {
        dig = num % 10;
        cout << dig << " ";
        num = num / 10;
    }
    return 0;
}