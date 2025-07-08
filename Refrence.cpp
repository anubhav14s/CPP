#include<iostream>
using namespace std;
int main(){
    int x=34;
    int &y=x;
    cout<<x<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
}