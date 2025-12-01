#include <iostream>
using namespace std;
int main(){
    int A[5]={4,9,12,7,3};
    int sum=0;
    for(int x:A)
    sum+=x;
    cout<<"The sum of all the elements of the given array is "<<sum<<endl;

}