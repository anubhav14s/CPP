#include <iostream>
using namespace std;
class Rectangle{
public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1;
    r1.length=4;
    r1.breadth=7;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;
}