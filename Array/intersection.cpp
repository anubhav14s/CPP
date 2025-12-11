#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,9,5,3,8};
    int arr1[5]={0,4,7,5,1};
    for(int i=0;i<5;i++){
        int count=0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr1[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}