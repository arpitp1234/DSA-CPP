#include<iostream>
using namespace std;

int main(){
    int num,n,sum=0;
    cout<<"Enter the number :- ";
    cin>>num;
    for(int i=0;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"The number is perfect";
    }else{
        cout<<"The number is not perfect";
    }
    return 0;
}