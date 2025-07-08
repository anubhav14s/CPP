#include<iostream>
using namespace std;
int main(){
    int x=34;
    int &y=x;
    cout<<x<<endl;
    x++;
    y++;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    
}