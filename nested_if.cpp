#include <iostream>
using namespace std ;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers to be compared ";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"The greatest  number is a "<<a<<endl;}
        else{
            if(b>c){
                
                cout<<"The greatest number is b "<<b<<endl;
            }
            else {
            cout<<"The greatest number is c "<<c<<endl;

        }
    }
}