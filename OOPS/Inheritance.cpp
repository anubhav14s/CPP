#include <iostream>
using namespace std;
class person{
public:
    string name;
    int age;
    person(){
        cout<<"Hi i am person constructor"<<endl;
    }
    ~person(){
        cout<<"Hi i am person destructor"<<endl;
    }

};
class student: public person{
public: 
    int rollno;
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollNo: "<<rollno<<endl;
    }
    student(){
        cout<<"Hi i am a student consturctor"<<endl;
    }
    ~student(){
        cout<<"Hi i am a student desturctor"<<endl;
    }
};

int main(){
    person p1;
    student s1;
    s1.name="Rahul";
    s1.age=21;
    s1.rollno=1240;
    s1.getinfo();
    return 0;

}