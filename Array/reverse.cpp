#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,4,1,7,9,8,2};
    int start=0,end=6;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}