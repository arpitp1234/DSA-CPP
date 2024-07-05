/*Doubly linked list*/
/*
In doubly linked list each node is divided into three parts
     |prev|data|next

*/

/*All the operation for doubly linked list*/


#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    struct Node *t,*last;
    int i;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[i];
    first->next=NULL;
    first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p){
    while(p){
        cout<<p->data;
        p=p->next;
    }
    cout<<endl;
}
int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void Insert(struct Node *p,int index,int x){
    struct Node *t;
    int i;
    if(index<0 || index>length(p)){
        return;
    }
    if(index==0){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next){
            p->next->prev=t;
        }
        p->next=t;
    }
}

int Delete(struct Node *p,int index){
    struct Node *q;
    q=new Node;
    int x=-1,i;
    if(index<1 || index>length(p)){
        return -1;
    }
    if(index==1){
        p=q;
        p=p->next;
    
    if(p){
        p->prev=NULL;
    }
    x=q->data;
    free(q);
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        q=p;
        p=p->next;
        q->prev->next=q->next;
        if(q->next){
            q->next->prev=q->prev;
        }
        q->next=q->prev=NULL;
        x=q->data;
        free(q);
    }
    return x;

}
void Reverse(struct Node *p){
    struct Node *temp;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
    }
    if(p!=NULL && p->next==NULL){
        first=p;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    Display(first);
    return 0;
}




