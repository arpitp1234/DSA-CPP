#include<iostream>
using namespace std;


int main(){
    int n,sum=0;
    cout<<"Enter the number till which you want sum:- ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of number till n:- "<<sum;
    return 0;
}