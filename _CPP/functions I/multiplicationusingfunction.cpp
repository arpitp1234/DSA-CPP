#include<iostream>
using namespace std;

int multiplication(int a,int b,int c){
    int d;
    d=a*b*c;
    return d;
}

int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the first number:- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    cout<<"Enter the third number :- ";
    cin>>c;
    cout<<"The mulitplication of three number is:- "<<multiplication(a,b,c);
    return 0;
}