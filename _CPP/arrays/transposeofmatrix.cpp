#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    cout<<"Enter the matrix:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"The inputed matrix is:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"The transpose of matrix is:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[j][i];
        }
        cout<<endl;
    }
    return 0;
}