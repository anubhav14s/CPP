#include <iostream>
using namespace std;
template <class T>
class Rectangle
{
private:
    T length;
    T breadth;

public:
    Rectangle(T l, T b);
    T getLength() { return length; }
    T getBreadth() { return breadth; }
    void setLength(T l);
    void setBreadth(T n);
    T area();
    T perimeter();

};
template <class T>
Rectangle<T>::Rectangle(T length, T breadth)
{
    this->length = length;
    this->breadth = breadth;
}
template <class T>
void Rectangle<T>::setLength(T l)
{
    length = l;
}

template <class T>
void Rectangle<T>::setBreadth(T n)
{
    breadth = n;
}

template <class T>
T Rectangle<T>::area()
{
    return length * breadth;
}

template <class T>
T Rectangle<T>::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle<int> r1(10, 5);
    Rectangle<float> r2(1.47, 5.98);
    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Area of r1 is " << r2.area() << endl;
}