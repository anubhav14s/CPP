#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int c=sum(3,9);
    float d=sum(4.2f,9.3f);
    int e=sum(3,7,6);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    return 0;
}