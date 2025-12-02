#include <iostream>
using namespace std;
int fun(int A[], int n)
{ // Arrays are always passed by address.

    A[2]=34;
    
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int Arr[5] = {1, 4, 7, 22, 9};
    int size = 5;
    fun(Arr, size);
}
