#include<iostream>
#include<process.h>
using namespace std;

int main(){
    int a[4][4],b[4][4],c[4][4]={0};
    cout<<"Enter the 4x4 matrix:- "<<endl;
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
          cin>>a[i][j];
      }
      cout<<endl;
    }
    cout<<"Enter the 4x4 matrix:- "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }

    cout<<"The first matrix is:- "<<endl;
    for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
           cout<<a[i][j];
       }
       cout<<endl;
    }
    cout<<"The second matrix is:- "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           for(int k=0;k<4;k++){
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
           }
        }
    }

    cout<<"The multiplication of two matrix is:- "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          cout<<c[i][j];
        }
        cout<<endl;
    }
   return 0; 
}