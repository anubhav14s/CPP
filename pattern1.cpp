#include <iostream>
using namespace std ;
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        for (int j=0;j<=i;j++){
            cout<<"X ";
        }
        cout<<endl;
    }
    return 0;
}