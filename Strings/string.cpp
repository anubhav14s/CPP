#include <iostream>
#include <string>
using namespace std;
int main(){
    char str[50];
    cout<<"enter a string "<<endl;
    cin.getline(str,50);
    cout<<str<<endl;
    cout<<"Length of the given string is "<<strlen(str)<<endl;
    char *s ="good moring ";
    strcpy(str,s);
    cout<<str<<endl;

}