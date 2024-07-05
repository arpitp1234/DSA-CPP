/*Here we are going to find the greatest common divisor*/

#include<iostream>
using namespace std;

int gcd(int x,int y){
    int a;
    for(int i=1;i<x && i<y;i++){
        if(x%i==0 && y%i==0){
            a=i;
        }
    }
    return a;
}

int main(){
     int x,y;
     cout<<"Enter the first value:- ";
     cin>>x;
     cout<<"Enter the second value:- ";
     cin>>y;
     int k=gcd(x,y);
     cout<<"The gcd of two number is:- "<<k<<endl;
     return 0;
}