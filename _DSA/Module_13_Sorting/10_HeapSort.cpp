#include<iostream>
using namespace std;

void Insert(int A[],int n){
    int i=n,temp;
    temp=A[i];

    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

int Delete(int A[],int n){
    int i,j,x,temp,val;
    
    val=A[1];
    A[1]=A[n];
    A[n]=val;
    i=1,j=i*2;
    
    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }else{
            break;
        }
    }
    return val;
}
/*
For heap sort
step1:Inserting all element in the heap;
step2:Delelting all element in the heap;
*/

int main(){
    int H[]={0,2,5,8,9,4,10,7};

  //here zero is ignored we will not use position of zero

     for(int i=2;i<=7;i++){
        Insert(H,i);
     }
   
   //deleting all element will sort the array and thus procedure is called heapsort

   for(int i=7;i>1;i--){
     Delete(H,i);
   }

   cout<<"The heap is:- ";
   for(int i=0;i<=7;i++){
      cout<<H[i]<<" ";
   }
   return 0;
}




