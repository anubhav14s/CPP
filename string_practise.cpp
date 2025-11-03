#include<iostream>
using namespace std;
int main(){
    string email={100};
    cout<<"Enter your email id";
    cin>>email;
    int key=email.find('@');
    cout<<"Your username is ";
    cout<<email.substr(0,key)<<endl;
    return 0;
}