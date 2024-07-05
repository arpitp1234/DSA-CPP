#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number till which you want the sum:-";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        sum=sum+i*i;
    }
    cout<<"The sum of square of number is:- "<<sum;
    return 0;
}