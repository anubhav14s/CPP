#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, count = 0,sum=0,dig=0;
    cout << "ENter the number ";
    cin >> num;
    int original =num;
    int num1 = num;
    while (num1 != 0)
    {
        count++;
        num1 = num1 / 10;
    }
    while(num!=0){
        dig=num%10;
        sum+=pow(dig,count);
        num=num/10;
    }
    
    if(sum==original){
        cout<<original<<" is an Armstrong Number "<<endl;
    }else{

        cout<<original<<" is not an Armstrong Number "<<endl;
    }
}