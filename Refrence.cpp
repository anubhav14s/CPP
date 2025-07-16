#include<iostream>
using namespace std;
int main(){
    int a=34;
    int &b=a;
    cout<<"b is the refrence of a"<<endl;
    cout<<a<<endl;
    a++;
    b++;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    
    
}