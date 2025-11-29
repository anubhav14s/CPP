#include <iostream>
using namespace std;
int main(){
    int A;
    cout<<"Enter the value to be stored in A"<<endl;
    cin>>A;
    cout<<"The value of A is "<<A;
    int *p;
    p=&A;
    cout<<endl<<"The address of A is stored in p which is "<<p<<endl;
    return 0;

}