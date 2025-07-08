#include <iostream>
using namespace std;
int main(){
    cout<<"The array is created in heap"<<endl;
    int *p= new int[10];
    cout<<sizeof p<<endl;
    cout<<"Size of the array can be changed after creating it."<<endl;

    p=new int[24];
    cout<<sizeof p;

}
