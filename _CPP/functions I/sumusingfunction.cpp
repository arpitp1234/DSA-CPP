#include<iostream>
using namespace std;

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a;
    int b;
    cout<<"Enter the first number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    int c=sum(a,b);
    cout<<"The sum of two number is "<<c;
    return 0;
}