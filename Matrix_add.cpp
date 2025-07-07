#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows ";
    cin >> r;
    cout << "Enter the number of columns ";
    cin >> c;
    int A[r][c];
    int B[r][c];
    int C[r][c] = {0};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << endl;

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"The resultant matrix is "<<endl;
     for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<C[i][j];
        }
        cout<<endl;
    }
}