#include<iostream>
#include<cmath>

using namespace std;
typedef float marks;
int main(){
    marks m,s,e,g,h;
    float avg;
    cout<<"Enter the marks of the student in different subjects"<<endl;
    cin>>m>>s>>e>>g>>h;
    avg=(m+s+e+g+h)/5;
    cout<<avg<<endl;
    if(avg>=90){
        cout<<"you have got A+ grade "<<endl;
    }else if(avg<90&&avg>=80){
        cout<<"you have got A grade "<<endl;
    }else if(avg<80&&avg>=70){
        cout<<"you have got B grade "<<endl;
    }else if(avg<80&&avg>=70){
        cout<<"you have got C grade "<<endl;
    }else if(avg<70&&avg>=60){
        cout<<"you have got D grade "<<endl;

    }else{
        cout<<"You have failed the exams";
    }
}