#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(){//DEFAULT CONSTRUCTOR
        length=1;
        breadth=1;
    }
    Rectangle(int l=0,int b=0){//PARAMETERIZED CONSTRUCTOR
        setlength(l);
        setbreadth(b);
    }
    Rectangle(Rectangle &r){//COPY CONSTRUCTOR
        length=r.length;
        breadth=r.breadth;
    }








    void setlength(int l)
    {
        if (l < 0)
        {
            length = -l;
        }
        else
        {

            length = l;
        }
    }
    void setbreadth(int b)
    {
        if (b < 0)
        {
            breadth = -b;
        }
        else
        {

            breadth = b;
        }
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    int getlength(int l)
    {
        if (l < 0)
        {
            cout << "The length of the rectangle is " << -l << endl;
        }
        else
        {
            cout << "The length of the rectangle is " << l << endl;
        }
        return 0;
    }
    int getbreadth(int b)
    {
        if (b < 0)
        {
            cout << "The breadth of the rectangle is " << -b << endl;
        }
        else
        {
            cout << "The breadth of the rectangle is " << b << endl;
        }
        return 0;
    }
};
int main()
{
    
    Rectangle r2(10,5);
    Rectangle r3(r2);
    

    
    cout << "Area is " << r2.area() << endl;
    cout << "Area is " << r3.area() << endl;
    return 0;
}