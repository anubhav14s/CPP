#include<iostream>
using namespace std;

int * fun(int size){
    int *p;
    p=new int [size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>p[i];
    }
    return p;
}

int main(){
    int *ptr;
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    ptr=fun(n);
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }cout<<endl;
    return 0;
}