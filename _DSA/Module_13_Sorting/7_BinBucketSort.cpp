/*
Bin_Bucket_Sort;

It is similar to Count Sort;

Take another array of size equal to largest element in the array

=>Intialise with null i.e it means they are pointers;

=>So we have array of pointer known as bins and they all are intialisze to NULL;

=>Scan array and drop that value to bins.

time=>Scanning n times array A+Scanning n times Bins array;

*/


/*code*/

#include<iostream>
#include<limits.h>
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

//Linked list Node;

class Node{
    public:
    int value;
    Node *next;
};

void Insert(Node **bins,int x){
    Node *temp=new Node;
    temp->value=x;
    temp->next=nullptr;

    if(bins[x]==nullptr){
        bins[x]=temp;
    }else{
        Node *p=bins[x];
        while(p->next != nullptr){
            p=p->next;
        }
        p->next=temp;
    }
}
int Deletes(Node **bins,int x){
    Node *p=bins[x];
    bins[x]=bins[x]->next;
    int z=p->value;
    delete p;
    return z;
}
void Binsort(int A[],int n){
    int max=Max(A,n);
    Node **bins=new Node *[max+1];
    for(int i=0;i<max+1;i++){
        bins[i]=nullptr;
    }
    for(int i=0;i<n;i++){
      Insert(bins,A[i]);
    }
    int i=0;
    int j=0;
    while(i<max+1){
        while(bins[i]!= nullptr){
            A[j++]=Deletes(bins,i);
        }
        i++;
    }
    delete []bins;
}

int main(){
    int A[]={2,5,8,12,3,6,7,10};
    int n=sizeof(A)/sizeof(A[0]);
    Print(A,n,"Unsorted A");
    Binsort(A,n);
    Print(A,n,"Sorted A");
    cout<<endl;
    return 0;
}