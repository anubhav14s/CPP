#include <iostream>
using namespace std;
int main()
{
    int r, c;
    int A[r][c];
    int B[r][c];
    int C[r][c] = {0};
    cout << "Enter the number of rows ";
    cin >> r;
    cout << "Enter the number of columns ";
    cin >> c;
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
        cout << endl;
    }
}