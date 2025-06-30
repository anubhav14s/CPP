#include<iostream>
#include <cmath>
using namespace std;
int main(){
    float amt,p,r,t,interest;
    cout<<"Enter the Principle amount borrowing time and rate of interest ";
    cin>>p>>t>>r;
    amt=p*pow((1+r/100),t);
    interest = amt-p;
    cout<<"The final amount is "<<amt<<" with principle amount "<<p<<" and interest amount "<<interest;
    return 0;

}