/*
MergeSort:-

Defining Merging:-

Merging is a process of combining two sorted list into single sorted list.

The size of list may or may not be same and each list must have minmum 1 elemnet;


MergeSort:-

In case of merge sort intially we consider each list as single list and merge it accordingly.


MergeSort we require extra space for sorting.
*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }else{
            B[k++]=A[j++];
        }
    }
    for(;i<=h;i++){
        B[k++]=A[i];
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}

/*Iterative Merge sort*/

void IMergeSort(int A[],int n){
    int p;
    for(p=2;p<=n;p=p*2){
        for(int i=0;i+p-1<n;i=i+p){
            int l=i;
            int h=i+p-1;
            int mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n){
        Merge(A,0,p/2-1,n-1);
    }
}

/*Recursive Merge Sort*/
void MergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}

int main(){
  //int A[]={10,9,8,7,6,5,4,3,2,1};
  //int n=10,i;
  //IMergeSort(A,n);
  //for(i=0;i<10;i++){
  //   cout<<A[i]<<" ";
  //}
  //cout<<endl;

    // for recursive merge sort;
    int A[]={15,9,14,7,6,5,4,3,2,1};
    int i;
    MergeSort(A,0,9);
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}