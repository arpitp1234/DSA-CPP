/*It's a phenomenon for a function with same name to exist with different number and type of argument*/

/*It's a phenomenon for a funciton with same name to exist with different number and type of argumnet*/

/*Overloading menas applying multiple meaning to funciton 
and operator*/


#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"The sum of two value is:- "<<a+b<<endl;
}

int sum(int a,int b,int c){
    cout<<"The sum of two value is:- "<<a+b+c<<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter the first value:- "<<endl;
    cin>>a;
    cout<<"Enter the second value:- "<<endl;
    cin>>b;
    cout<<"Enter the third value :- "<<endl;
    cin>>c;
    sum(a,b);
    sum(a,b,c);
    return 0;
}




