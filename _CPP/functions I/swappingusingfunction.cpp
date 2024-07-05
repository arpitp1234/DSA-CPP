#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *a=c;
}

int main(){
    int a;
    int b;
    cout<<"Enter the value of a:- ";
    cin>>a;
    cout<<"Enter the value of b:- ";
    cin>>b;
    swap(a,b);
    cout<<"The value of a is:- "<<a;
    cout<<"The value of b is:- "<<b;
    return 0;
}

