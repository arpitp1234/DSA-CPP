//Circular linked list

/*
A linked list in which last node will point on first node then that linked list is claled circular linked list

circular linked list can be used ot help traverse list again and again if needed

Both single and doubly linked list can be made into a cicular linked list

*/

/*
In circular linked list instead of placing NULL at last node address field you are placing addres of very first node
*/
#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>

//1.defingin a Node;

struct Node{
    int data;
    struct Node *next;
}*Head;

//2.creating a circular linked list

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    for(int i=0;i<n;i++){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
//3.Creating a display function for linked list

void Display(struct Node *h){
    do{
        cout<<h->data;
        h=h->next;
    }while(h!=Head);
    cout<<endl;
}

 //Now we are using recursion

void RDisplay(struct Node *h){
    static int flag=0;
    if(h!=Head || flag==0){
        flag=1;
        cout<<h->data;
        RDisplay(h->next);
    }
    flag=0;
}

//4.finding the length of the list

int length(struct Node *p){
    int len=0;
    do{
        len++;
        p=p->next;
    }while(p!=Head);
    return len;
}

//5.Inserting in a circular linked list

void insert(struct Node *p,int index,int x){
    struct Node *t;
    int i;
    if(index>0 || index<length(Head)){
        if(index==0){
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            if(Head==NULL){
                Head=t;
                Head->next=Head;
            }else{
                while(p->next!=Head){
                    p=p->next;
                    p->next=t;
                    t->next=Head;
                    Head=t;
                }
            }
        }
    }else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=p->next;
        p->next-t;
    }
}
//6.Deleting a node

int Deletes(struct Node *p,int index){
    int x;
    struct Node *q;
    int i;
    if(index<0 || index>length(Head)){
        return -1;
    }
    if(index==1){
        while(p->next!=Head){
            p=p->next;
        }
        x=Head->data;
        if(Head==p){
            free(Head);
            Head=NULL;
        }else{
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    }else{
        for(int i=0;i<index-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=q->data;
        free(q);
    }
    return x;
}
int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    return 0;
}