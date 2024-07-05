/*4)Quick Sort:-*/
/*
=>Idea behing Quick Sort:- A quick sort work on the idea that an elemnet is in sorted position ,if all the element before that elemnet
are smaller and all the elemnet after element are greater.

=>So here we select the first element as pivot.

=>maximum two element must be there for performing the partition.

=>Above entire procedure selcting pivot and bringing to partition position is called partitioning.


=>Best case=>If partitioning is happeing only in middle
                
                time=O(nlogn)

=>Worst case=>If partitioning is done at any end of the list;
              
                time=O(n*n);


=>Average case=>O(nlog2n);
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    do{
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
        }while(A[j]>pivot);
        if(i<j){
            swap(&A[i],&A[j]);
        }
    }while(i<j);
    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

int main(){
    int A[]={3,7,9,10,6,5,12,4,11,14};
    int n=10;
    QuickSort(A,0,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}