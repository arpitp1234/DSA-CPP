#include<iostream>
using namespace std;

int main(){
    int num,k,sum=0;
    cout<<"Enter the number:- ";
    cin>>num;
    while (num>0)
    {
      k=num%10;
      sum=sum+k;
      num=num/10;
    }
    cout<<"The sum of digit in a number is:- "<<sum;
    return 0; 
}