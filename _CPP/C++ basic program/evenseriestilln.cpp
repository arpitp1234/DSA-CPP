#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number till which do you want the even series:- ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}