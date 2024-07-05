/*Bubble Sort*/
/*
Bubble Sort will compare consequtive pair of element every time,if first element ins greater than other then it will swap the element.

                     minimum time taken by bubble sort=O(n);
                     maximum time taken by bubble sort=O(n*n);

*/

/*Program code for bubble sort*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int A[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
            }
        }
    }
}

//#improving bubble sort by introducing flag

void IBubble(int A[],int n){
    int i,j,flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            flag=0;
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}

int main(){
    int A[]={3,7,9,10,6,5,12,4,11,2};
    int B[]={3,7,9,10};
    bubble(A,10);
    for(int i=0;i<10;i++){
       cout<<A[i]<<" "; 
    }
    /*after introductin flag*/
}
