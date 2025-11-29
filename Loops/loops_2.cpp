#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i=0;
    cout<<"Enter the number";
    cin>>n;
    while(i<n){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}