#include <iostream>
using namespace std;
int * square (int x){
    int * ptr=new int;
    *ptr=x*x;
    return ptr;
}
int main(){
        int *result =square(5);
        cout<<*result<<endl;
        return 0;

}