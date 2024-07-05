/*--------------------------------------------------------------------6)2D arrays------------------------------------------------------------------------------------------*/
/*It is used or implementing arrays or tabular data*/
/*There are 3 method for creating 2d arrays*/
/*Method 1*/
/*
int A[3][4];
Intialising 2D array
int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}
*/
/*Method 2*/
/*
int *A[3];
A[0]=new int[4];
A[1]=new int[4];
A[2]=new int[4];
*/
/*Method 3*/
/*Isme ham double pointer ko lenge*/
/*
   int **A;
   A[0]=new int[4];
   A[1]=new int[4];
   A[2]=new int [4];
*/
/*Implementing three method for creating array in CPP*/



#include<iostream>
using namespace std;

int main(){
    //Method1 
    int a[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    cout<<"The first matrix:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //Method2;
    int *B[3];
    B[0]=(int *)malloc(3*sizeof(int));
    B[1]=(int *)malloc(3*sizeof(int));
    B[2]=(int *)malloc(3*sizeof(int));
    cout<<"The second matrix is:- "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<"The matrix after displaying is:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    int **C;
    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(sizeof(int));
    C[1]=(int *)malloc(sizeof(int));
    C[2]=(int *)malloc(sizeof(int));
    cout<<"Enter the third matrix:- \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>C[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}





















