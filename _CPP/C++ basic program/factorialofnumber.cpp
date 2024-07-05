#include<iostream>
using namespace std;

int main(){
    int fact=1,n;
    cout<<"Enter the number which do you want the factorial:- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
  cout<<"The factorial of number is:- "<<fact<<endl;
  return 0;
}