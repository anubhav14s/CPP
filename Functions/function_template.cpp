#include <iostream>
using namespace std;

template <class T >
T sum(T a,T b){
    return a+b;
}
int main(){
    int c = sum(4,11);
    float d = sum(3.9f,14.8f);
    double e = sum(4.8,9.2);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
}
