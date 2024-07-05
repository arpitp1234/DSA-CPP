#include<iostream>
using namespace std;

int main(){
    int num,k,s,sum=0;
    cout<<"Enter the number :- ";
    cin>>num;
    s=num;
    while(num>0){
        k=num%10;
        sum=sum+k*k*k;
        num=num/10;
    }
    if(s==sum){
      cout<<"The number is armstrong";
    }else{
      cout<<"The number is not armstrong";
    }
    return 0;
}