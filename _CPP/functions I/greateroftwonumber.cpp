#include<iostream>
using namespace std;

void  cgreater(int a,int b){
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }else{
        cout<<b<<" is greater than"<<a;
    }
}

int main(){
    int a;
    int b;
    cout<<"Enter the first number:- ";
    cin>>a;
    cout<<"Enter the second number:- ";;
    cin>>b;
    cgreater(a,b);
    return 0;
}