#include<iostream>
using namespace std;

int division(int a,int b){
    float c;
    c=a/b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter the first number:- ";
    cin>>a;
    cout<<"Enter the second number:- ";
    cin>>b;
    int k=division(a,b);
    cout<<"The division of number is:- "<<k;
    return 0;
}