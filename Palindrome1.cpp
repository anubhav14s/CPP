#include <iostream>
using namespace std;
int main(){
    string s={"madam"};
    string srev="";
    int len=(int)s.length();
    srev.resize(len);
    for (int i=0,j=len-1;i<len;i++,j--){
        srev[i]=s[j];
    }
    cout<<srev<<endl;
    if (s.compare(srev)==0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}