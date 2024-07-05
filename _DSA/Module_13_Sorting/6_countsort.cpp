//Count sort

/*
=>Count sort is index base sorting
=>This is one of the easiest sorting to understand and also it is fastest but it consume lot of memory.


time taken=>Scanning throught array A +Scanning throught array count
                    n+n;

*/

#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>

int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int findMax(int A[],int n){
    int max=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}

int CountSort(int A[],int n){
    int i,j,max,*C;
    max=findMax(A,n);
    C=(int *)malloc(sizeof(int)*(max+1));
    for(int i=0;i<max+1;i++){
        C[i]=0;
    }
    for(int i=0;i<n;i++){
        C[A[i]]++;
    }
    i=0,j=0;
    while(j<max+1){
        if(C[j]>0){
            A[i++]=j;
            C[j]--;
        }else{
            j++;
        }
    }
}

int main(){
    int A[]={3,7,9,10,6,5,1,24,11,2};
    int n=10;
    CountSort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
}

