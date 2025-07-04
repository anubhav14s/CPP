#include <iostream>
using namespace std;
int main(){
    int A[5]={4,9,2,7,3};
    int sum=0;
    for(int x:A)
    sum+=x;
    cout<<sum<<endl;

}