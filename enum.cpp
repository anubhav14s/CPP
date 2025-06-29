#include <iostream>
using namespace std;
enum day{mon,tue,wed,thus,fri,sat,sun};//all the codes will be assinged value sequentially staring from 0
enum dept{cse=3,mech,it,civil=11,ai,chem,aero=34};

int main(){
    day d;
    d=thus;
    dept c;
    c=mech;
    cout<<d<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thus<<endl;
    cout<<cse<<endl;
    cout<<mech<<endl;
    cout<<it<<endl;
    cout<<civil<<endl;
    cout<<ai<<endl;
    cout<<chem<<endl;
    cout<<aero<<endl;
  
    return 0;
}