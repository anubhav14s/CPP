#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, rem = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    int original=num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num=num/10;
    }
    if(rev==original){
        cout<<original<<" is a Palindrome";
    }else{

        cout<<original<<" is not a Palindrome";
    }
}