/*
Yaha par ham detect karege ki linked list is having loop or linked list is linear
*/

/*
 If last node of linked list is pointing to some node of same linked list then it is forming a loop
*/

#include<iostream>
using namespace std;

//1.Defining the Node

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


//2.creating the node

void create(int A[],int n){
    //here n is the number of eleemnt
    int i;
    struct Node *t,*last;
    first=new struct Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=0;i<n;i++){
        t=new struct Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
//3.checking if the linked list is loop or not
int isLoop(struct Node *f){
    struct Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p && q && p!=q);
    if(p==q){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50};
    create(A,5);
    t1=first->next->next;
    t2=first->next->next->next->next->next;
    t2->next=t1;
    if(isLoop(first)){
        cout<<"is is a loop";
    }else{
        cout<<"It is not a loop";
    }
    return 0;
}









