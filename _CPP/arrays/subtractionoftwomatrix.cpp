#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    cout<<"Enter the first matrix:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
     cout<<endl;
    }
    cout<<"Enter the second matrix:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cin>>b[i][j];
        }
    }

    cout<<"After subtracting the matrix is:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           c[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"The subtraction of two matrix is:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}