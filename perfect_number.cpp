#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number ";
    cin>>num;
    for (int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<num<<" is a perfect number"<<endl;
    }else{
        cout<<num<<" is not a perfect number"<<endl;
        
    }
}