#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec; // Empty vector.
    vector<int> vec1 = {1, 2, 3};
    vector<char> vec2 = {'a', 'b', 'c', 'd','e','f','g'};

    //For each loop 
    for (int val : vec1)
    {
        cout << val << " ";
    }
    cout << endl;

    for (char x : vec2)
    {
        cout << x << " ";
    }
    cout << endl;
    //size function 
    cout << "Size of vec2 is " << vec2.size() << endl;

    //Push back function
    vec.push_back(25);
    cout << "Size of vec is " << vec.size() << endl;
    vec.push_back(9);
    cout << "Size of vec is " << vec.size() << endl;
    vec.push_back(56);
    cout << "Size of vec is " << vec.size() << endl;

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout<<endl;
    
    //Pop back function
    vec1.pop_back();
    for (int val : vec1)
    {
        cout << val << " ";
    }
    cout<<endl;

    // Front and back function
    cout<<vec2.front()<<endl;;
    cout<<vec2.back()<<endl;

    //At function
    cout<<vec2.at(3)<<endl;
}