#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;//Empty vector.
    vector<int>vec1={1,2,3};
    vector<char>vec2={'a','b','c','d'};
    for(int val:vec1){
        cout<<val<<" ";
    }
    cout<<endl;
    for(char x:vec2){
        cout<<x<<" ";
    }
    cout<<endl;

}