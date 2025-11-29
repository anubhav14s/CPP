#include <iostream>
using namespace std;
int main(){
    float time;
    cout<<"Enter the time ";
    cin>>time;
    if(time>=9&&time<17){
        cout<<"You have to work for "<<17-time<<" hours more"<<endl;
    }
    else{
        cout<<"Your working hours are complete."<<endl;
    }


}