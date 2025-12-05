#include<iostream>
using namespace std;
int bintodec(int num){
    int ans=0,rem=0,pow=1;
    while(num>0){
        rem=num%10;
        ans+=rem*pow;
        num/=10;
        pow*=2;
    }
    return ans;
}
int main(){
    int n=10101;
    int ans=bintodec(n);
    cout<<ans;
    
}