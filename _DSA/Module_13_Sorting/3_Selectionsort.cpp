/*3)Selection Sort*/
/*

=>This algorithm also sort elmenet in passes;

=>Here we are selecting a position and finding elmenet for that position.


=>Toh ham seletion sort me ek postion ko select kar rahe hai and us position par present element ko baki element jo hai
array me unse compare kar rahe hai.

*/

#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Selection(int A[],int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
               swap(&A[i],&A[j]);
            }
        }
    }
}
int main(){
    int A[]={2,1,4,3,6,5,8,7,10,9};
    int n=10;
    Selection(A,n);
    for(int i=0;i<10;i++){
       cout<<A[i]<<" ";
    }
    return 0;
}