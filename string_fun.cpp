#include<iostream>
#include<string>
using namespace std;
int main(){
    string s={"Hello"};
    cout<<s<<endl;
    string s1={" are you fine"};
    s.append(s1);
    s.insert(6," anubhav ");
    cout<<s<<endl;
    s.replace(6,8,"Rahul");
    cout<<s<<endl;
    s.push_back('?');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    string s2={" you look so dull "};
    s.append(s2);
    cout<<s<<endl;
    s1.swap(s2);
    cout<<s1<<endl;
    
}