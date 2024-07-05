#include<iostream>
using namespace std;

void print(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number till which do you want priting of number:- ";
    cin>>n;
    print(n);
    return 0;
}