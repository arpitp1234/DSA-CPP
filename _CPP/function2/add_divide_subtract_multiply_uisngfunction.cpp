#include<iostream>
using namespace std;

void calculator(int a,int b){
    cout<<"The sum is:- "<<a+b<<endl;
    cout<<"The multiplication is:- "<<a*b<<endl;
    cout<<"The division is:- "<<a/b<<endl;
    cout<<"The subtraction is:- "<<a-b<<endl;
}

int main(){
    int a=10;
    int b=20;
    calculator(10,20);
    return 0;
}