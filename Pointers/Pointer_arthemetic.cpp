#include<iostream>
using namespace std ;
int main(){
    int A[]={73,49,83,71,27,99};
    int *p=A;
    cout<<"The value of p is "<<(unsigned long)p<<endl;
    cout<<"The value of p++ is "<<(unsigned long)++p<<endl;
    cout<<"The value of p-- is "<<(unsigned long)--p<<endl;
    cout<<"The value of p+4 is "<<(unsigned long)p+4<<endl;
    cout<<"The value of p-3 is "<<(unsigned long)p-3<<endl;
    cout<<"The value of *p-3 is "<<(unsigned long)*p-3<<endl;
    cout<<"The value of *p[2]-5 is "<<(unsigned long)(*(p+2)-5)<<endl;
    cout<<"The value of *p[2]-*p[5] is "<<(unsigned long)(*(p+2)-*(p+4))<<endl;
    
}