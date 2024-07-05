#include<iostream>
using namespace std;

void display(int a[4][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[4][4];
    cout<<"Enter the 4*4 matrix:- "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The matrix that you have entered is:- "<<endl;
    display(a);
    return 0;
}
