
#include<iostream>
using namespace std;

int fact(int x);

int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    int k=fact(n);
    cout<<"The factorial of the number is:- "<<k<<endl;
    return 0;
}

int fact(int x){
    int y;
    if(x==0 || x==1){
        return 1;
    }else{
       y=fact(x-1)*x;
    }
    return y;
}