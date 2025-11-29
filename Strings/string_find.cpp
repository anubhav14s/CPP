#include<iostream>
using namespace std;
int main(){
    string s={"Hello World"};
    cout<<s.find("l")<<endl;
    cout<<s.rfind("l")<<endl;
    cout<<s.find("Hel")<<endl;
    cout<<s.find_first_of("o")<<endl;//finds the first occurance of a char 
    cout<<s.find_last_of("o")<<endl;//finds the last occurance of a char 
    cout<<s.find_first_of("l",4)<<endl;//finds the occurance of a char after the index which is passed in the fun.
    cout<<s.find_last_of("l",4)<<endl;//finds the occurance of a char after the index from rhs which is passed in the fun.
    return 0;
}