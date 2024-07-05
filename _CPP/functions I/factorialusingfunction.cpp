#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
     for(int i=1;i<=n;i++){
        fact=fact*i;
     }
     return fact;
}

int main(){
  int n;
  cout<<"Enter the number of which do you want factorial:- ";
  cin>>n;
  int k= fact(n);
  cout<<"The factorial of the number is:- "<<k;
  return 0;
}