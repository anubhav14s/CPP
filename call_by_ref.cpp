#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=7,b=9;
    swap(a,b);
    cout<<a<<b<<endl;
    return 0;
}