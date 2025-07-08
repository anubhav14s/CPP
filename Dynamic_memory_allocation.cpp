#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<endl;
    int *p= new int[size];
    cout<<"The array of size "<<size* sizeof (int)<<" is created in heap"<<endl;
    
    delete []p;
    cout<<"Size of the array can be changed after creating it."<<endl;

    cout<<"Enter the size of the array again"<<endl;
    cin>>size;
    
    p=new int[24];
    cout<<"The array  size is changed to "<<size* sizeof (int)<<endl;

    delete []p;

}
