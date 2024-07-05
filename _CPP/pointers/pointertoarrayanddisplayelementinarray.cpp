#include<iostream>
using namespace std;

int main(){
    int a[5];
    int *p;
    p=a;
    cout<<"Enter the element in the array:- ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"The element in the array is:- ";
    for(int i=0;i<5;i++){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}











