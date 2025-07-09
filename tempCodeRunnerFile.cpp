#include <iostream>
using namespace std;
int main(){
   int r1,r2,c1,c2;
   cout<<"Enter the number of rows for matrix 1";
   cin>>r1;
   cout<<"Enter the numbers of columns for matrix 1";
   cin>>c1;
   cout<<"Enter the number of rows for matrix 2";
   cin>>r2;
   cout<<"Enter the number of columns for matrix 2";
   cin>>c2;
   int A[r1][c1];
   int B[r2][c2]; 
   int C[r1][c2]={0};
   for (int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cin>>A[i][j];
    }
   }
   for (int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        cin>>B[i][j];
    }
    cout<<endl;
   }
    for(int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            for (int k=0;k<c1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for (int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}