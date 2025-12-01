#include <iostream>
using namespace std;
int main(){
    int A[7]={7,19,5,98,45,67,989},max=0;
    for(int x:A)
    if(x>max){
        max=x;
    }
    cout<<"The greatest number in the given array is "<<max<<endl;
    return 0;
}