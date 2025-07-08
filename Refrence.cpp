#include<iostream>
using namespace std;
int main(){
    int x=34;
    int &y=x;
    cout<<"Y is the refrence of X"<<endl;
    cout<<x<<endl;
    x++;
    y++;

    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    
    
}