#include <iostream>
using namespace std ;
int main(){
    int A[7]={33,90,1,45,22,7,3};
    int n=7;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp =A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int x:A)
    cout<<x<<" ";
    return 0;

}