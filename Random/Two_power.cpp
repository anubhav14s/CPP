#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int rem=0;
    bool ispow=1;
    while(num>1){
        rem=num%2;
        if(rem!=0){
            ispow=0;
        }
        num/=2;
    }
    if(!ispow){
        cout<<"This number is not a power of 2"<<endl;
    }else{
        cout<<"This number is a power of 2"<<endl;
    }
    return 0;
}