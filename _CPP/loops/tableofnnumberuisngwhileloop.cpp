#include<iostream>
using namespace std;

int main(){
  int n,i;
  cout<<"enter the number of which do you want the table:- ";
  cin>>n;
  i=1;
  while(i<=10){
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    i++;
  }
  return 0;
}