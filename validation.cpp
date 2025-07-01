#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age<=0){
        cout<<"Enter a valid age"<<endl;
    }
    else if(age>=18){
        cout<<"You are elligible for aadhar chrd."<<endl;
    }
    else{
        cout<<"You are not elligible for aadhar chrd."<<endl;
        
    }
    return 0;
}