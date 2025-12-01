#include <iostream>
using namespace std;
int main(){
    int A[5];
    cout<<"Enter the elements of the array";
    for(int i=0;i<5;i++){
        cin>>A[i];
    }
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }return 0;
}