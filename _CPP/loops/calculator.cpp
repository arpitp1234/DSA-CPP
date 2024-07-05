#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cout<<"Enter the First number :- ";
    cin>>a;
    cout<<"Enter the second number:- ";
    cin>>b;
    cout<<"Enter the operator + - / *  =";
    cin>>ch;
   switch (ch)
   {
   case '+':
     cout<<"The sum of two number is:- "<<a+b;
    break;
    case '-':
      cout<<"The difference of two number is"<<a-b;
    break;
   case '*':
     cout<<"The multiplication of two number is"<<a*b;
    break;
   case '/':
      cout<<"The division of two number is:- "<<a/b;
    break;
   default:
     cout<<"You have entered the wrong case";
   }
    return 0;
}