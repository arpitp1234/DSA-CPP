#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first side:- ";
    cin>>a;
    cout<<"Enter the second side:- ";
    cin>>b;
    cout<<"Enter the third side:- ";
    cin>>c;
    if(a==b && b==c){
        cout<<"The triangle is equilateral";
    }else if(a==b || b==c || c==a){
        cout<<"The triangle is isosceles ";
    }else{
        cout<<"The triangle is scalene";
    }
    return 0;
}