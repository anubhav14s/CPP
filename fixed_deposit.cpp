#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int deposite,time;
    float maturity_amt,rate,profit,tax,recieved_amt;
    cout<<"Enter the amount to be deposited.";
    cin>>deposite;
    cout<<"Enter the banks return rate and time ";
    cin>>rate>>time;
    maturity_amt=deposite*pow((1+rate/100),time);
    profit=maturity_amt-deposite;
    tax=profit*(30.0/100);
    recieved_amt=maturity_amt-tax;
    cout<<"The final maturity amount on the deposite of "<<deposite<<" is "<<maturity_amt<<endl;
    cout<<"The return on the deposite amount is "<<rate<<"% which is "<<profit<<endl;
    cout<<"There is a tax deduction of 30% from the profit which is "<<tax<<endl;
    cout<<"Final amount after tax deduction is "<<recieved_amt;
    return 0;

}