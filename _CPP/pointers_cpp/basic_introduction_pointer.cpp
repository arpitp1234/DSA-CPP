/*A pointer is a variable that contain memory address(location ) of another varialbe that is declared as same datatype*/

#include<iostream>
using namespace std;
int main(){
    int a=35;
    int *p;
    p=&a;
    cout<<"The value is:- "<<p<<endl;
    cout<<"The value is:- "<<*p<<endl;
    cout<<"The value is:- "<<&a<<endl;
    cout<<"The value is:-"<<*(&a)<<endl;
    return 0;
}




