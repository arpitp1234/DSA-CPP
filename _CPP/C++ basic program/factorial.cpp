#include<iostream>
using namespace std;

int main(){
     long double n;
     long double fact=1;
    cout<<"Enter the number till which do you want factorial:- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of number is:- "<<fact;
    return 0;
}