#include<iostream>
using namespace std;

int main(){
    int i=100;
    int *p;
    p=&i;
    cout<<"The value of :-"<<*p<<endl;
    cout<<"The value of :-"<<*(&i)<<endl;
    return 0;
}









