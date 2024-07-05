/*Radix Sort:- */
/*
=>This sorting method is similar to Binsort
=>To make bin sort simple we introudct Radix Sort

   Bin Sort me agar largest element 10,000 toh hame 10,000 size ka array create karna hoga joki bahut size lagega.

  Yah radix sort me sirf ham 10 bins ya 10 size ka array banayge.

*/

#include<iostream>
#include<limits.h>
#include<cmath>
using namespace std;

template<class T>
void Print(T &arr,int n,string s){
    cout<<s<<" :["<<flush;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<flush;
        if(i<n-1){
            cout<<","<<flush;
        }
    }
    cout<<"]"<<endl;
}

int Max(int A[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(A[i]>max){
      max=A[i];
    }
  }
  return max;
}

//linked list Node;

class Node{
  public:
  int value;
  Node *next;
};

int countDigits(int x){
  int count=0;
  while(x!=0){
    x=x/10;
    count++;
  }
  return count;
}

void IntialisationBins(Node **p,int n){
  for(int i=0;i<n;i++){
    p[i]=nullptr;
  }
}
void Insert(Node **ptrBins,int value,int index){
   Node *temp=new Node;
   temp->value=value;
   temp->next=nullptr;
    if(ptrBins[index]==nullptr){
       ptrBins[index]=temp;
    }else{
       Node *p=ptrBins[index];
       while(p->next != nullptr){
        p=p->next;
       }
       p->next=temp;
    }
}
int Deletes(Node **ptrBins,int index){
   Node *p=ptrBins[index];
   ptrBins[index]=ptrBins[index]->next;
   int x=p->value;
   delete p;
   return x;
}
int getBinIndex(int x,int index){
   return (int)(x/pow(10,index))%10;
}
void RadixSort(int A[],int n){
  int max=Max(A,n);
  int nPass=countDigits(max);
  //createBinarary;
  
  Node **bins=new Node*[10];

  //intialise bins array with nullptr;
  IntialisationBins(bins,10);

  //update bins and A for npass time
  for(int pass=0;pass<nPass;pass++){
      //Update bins base on A value;
      for(int i=0;i<n;i++){
         int binIdx=getBinIndex(A[i],pass);
         Insert(bins,A[i],binIdx);
      }
  
   //update A with sorted element from bin;
   int i=0;
   int j=0;
   while(i<10){
     while(bins[i]!= nullptr){
       A[j++]=Deletes(bins,i);
     }
     i++;
   }
  }
   delete []bins;  
}
int main(){
  int A[]={237,146,259,348,152,163,235,48,36,62};
  int n=sizeof(A)/sizeof(A[0]);
  Print(A,n,"unsorted A");
  RadixSort(A,10);
  Print(A,n,"sorted A");
  return 0;
}