#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    for (int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i<=j){
                cout<<"X";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}