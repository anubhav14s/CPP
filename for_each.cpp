#include <iostream>
using namespace std;
int main(){
    int A[7]={2,8,7,5,3,9,10};
    for(int x:A)
        cout<<x<<endl;

    float B[5]={2.9,9.4,8,4.1,6};
    for(float x:B)
    cout<<x<<endl;

    char C[4]={'A',66,'C',68};
    for(auto x:C)
    cout<<x<<endl;
}