#include<iostream>
using namespace std;

void fibonacci(int n){
    int a1=0;
    int a2=1;
    int a3;
    cout<<a1<<" ";
    cout<<a2<<"  ";
    for(int i=2;i<n;i++){
        a3=a2+a1;
        cout<<a3<<" ";
        a1=a2;
        a2=a3;
    }
}

int main(){
    int n;
    cout<<"How many number till which fibonacci series do you want:- ";
    cin>>n;
    fibonacci(n);
    return 0;
}