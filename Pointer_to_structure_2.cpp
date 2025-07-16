#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    
    rectangle *p;
    p=new rectangle;
    p->breadth=34;
    p->length=39;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}