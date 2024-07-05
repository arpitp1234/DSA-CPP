#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c,s,area;
    cout<<"Enter the first side of triangle:- ";
    cin>>a;
    cout<<"Enter the second side of triangle:- ";
    cin>>b;
    cout<<"Enter the third side of triangle:- ";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is:- "<<area;
    return 0;
}