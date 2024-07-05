#include<iostream>
using namespace std;

int main(){
    int p,r,t,si;
    cout<<"Enter the principle:- ";
    cin>>p;
    cout<<"Enter the rate:- ";
    cin>>r;
    cout<<"Enter the time:- ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest of given input principle rate and time is:- "<<si;
    return 0;
}