#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r1 = {10, 8};
    struct rectangle r2;

    cout << r1.length << endl;
    cout << r1.breadth << endl;
    r2.length = 5;
    r2.breadth = 12;
    cout << r2.length << endl;
    cout << r2.breadth << endl;
    int area1 = r1.length * r1.breadth;
    int area2 = r2.length * r2.breadth;
    cout << "Area of rectangle r1 is " << area1 << endl;
    cout << "Area of rectangle r2 is " << area2 << endl;
    return 0;
}