#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    float root,root1;
    cout<<"Enter the value of a,b and c from the quadratic equation ";
    cin>>a>>b>>c;
    root=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"The two roots of the quadratic equ are "<<root<<","<<root1;
    return 0;
}