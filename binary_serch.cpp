#include <iostream>
using namespace std;
int main()
{
    int A[7] = {93, 11, 9, 45, 2, 98, 36};
    int n = 7;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    int s = 0, e = n-1,key;
    cout << "Enter the number to find inside the array ";
    cin >> key;
    while(s<=e){
        int mid=(s+e)/2;
        if(A[mid]==key){
            cout<<"The element is present at the index "<<mid<<endl;
            return 0;
        }else if(A[mid]<key){
            s=mid+1;
        }
        else if(A[mid]>key){
            e=mid -1;
        }
    }
    cout<<"Element not found";
    return 0;
   
}