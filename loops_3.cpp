#include<iostream>
using namespace std;
int main(){
    int fact=1,n,i=1;
    cout<<"Enter the number";
    cin>>n;
    if(n==0 || n==1){
        cout<<1;
        return 0;
    }
    while(i<=n){
        fact*=i;
        i++;
    }
    cout<<fact;
    return 0;
}