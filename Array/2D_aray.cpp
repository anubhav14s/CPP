#include <iostream>
using namespace std;
int main(){
    int A[2][3]={{13,8,9},{3,7,82}};
    int B[3][2]={3,9,6,1,6,3};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
}