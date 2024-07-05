#include<iostream>
using namespace std;


int main(){
    int a,b,c;
    cout<<"Enter the first number:- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    cout<<"Enter the third number :- ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greater among all of them";
    }else if(b>a && b>c){
        cout<<b<<" is greater among all of them";
    }else{
        cout<<c<<" is greater among all of them";
    }
    return 0;
}