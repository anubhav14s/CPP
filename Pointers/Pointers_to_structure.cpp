#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    rectangle r1;
    r1.length = 34;
    r1.breadth = 8;
    rectangle *p = &r1;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}