#include<iostream>
using namespace std;

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
   int n;
   cout<<"Check the number which you want to check is prime or not =";
   cin>>n;
   int k=prime(n);
   if(k==1){
    cout<<"The number is prime";
   }else{
    cout<<"The number is not prime";
   }
   return 0;
}