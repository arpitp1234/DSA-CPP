#include<iostream>
using namespace std;

int count(int num){
   int i=0;
   if(num>0){
    while(num!=0){
    num=num/10;
    i++;
   }
    return i;
   }else{
     return i;
   }
}

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int k;
    k=count(num);
    cout<<"The number of digit in a number is:- "<<k;
    return 0;
}