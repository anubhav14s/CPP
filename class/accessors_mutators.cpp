#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
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
    Rectangle r1;
    r1.setlength(-10);
    r1.setbreadth(5);
    r1.getlength(-10);
    r1.getbreadth(5);

    cout << "Area is " << r1.area() << endl;
    return 0;
}