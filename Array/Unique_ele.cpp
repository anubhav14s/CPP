#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,6,2,9,1,2,3};
    for(int i=0;i<7;i++){
        int count=0;

        for(int j=0;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
        
        
    }
    return 0;
}