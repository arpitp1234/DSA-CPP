#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int  a[5]={1,2,3,4,5};
    display(a,5);
    return 0;
}