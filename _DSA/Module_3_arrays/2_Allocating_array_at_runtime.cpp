/*-------------------------------------------------------------5_Allocation array at runtime------------------------------------------------------------------------------*/
/*1)Creating array in heap*/
/* void main(){
    int A[5];
    int *p;
    p=new int[5];
    p=(int *)malloc(5*sizeof(int))
         |
         |
         |
         |
         |
    AT any stage if there is no requirement of memroy then we weill delete that memory
   int CPP delete[]P
   int C free(p)

2)Accessing Array in heap
    int *p;
    p=new int[5];
    p[0]=5;
    p[1]=6;

Whenever you create an array whether it is in stack or in heap once an array of some size is create its size cannot be changed

But we have alternative method by which we can change the size of array in heap
int *p=new int[5]
So will take pointer of big size and inside it we will copy the value of p

  for(int i=0;i<5;i++){
    q[i]=p[i]
  }
  delete[]P
then our p variable then it will point to q
p=q;
q=NULL;
we cannot grow the size of array becaues it has contiguous memory location
*/
/*Example*/
/*Increasing the size of array in heap*/

#include<iostream>
using namespace std;

int main(){
    int *p;
    p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    int *q;
    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}


































