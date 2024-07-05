
#include<iostream>
#include<limits.h>

using namespace std;


struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

//1Creating the first linked list

void create1(int A[],int n){
    //here n is the number of element

    int i;
    struct Node *t,*last;
    first=new struct Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new struct Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

//2.creating the second linked list

void create2(int A[],int n){
    //here n is the number of element

    int i;
    struct Node *t,*last;
    second =new struct Node;
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
        t=new struct Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

//3.concatentaion of two linked list

void concatentation(struct Node *p,struct Node *q){
    third=p;
    while(p!=NULL){
        p=p->next;
    }
    p->next=q;
}


//3.Merging of two linked list

void Merge(struct Node *p,struct Node *q){
    struct Node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p){
        last->next=p;
    }
    if(q){
        last->next=q;
    }
}

//Display function

//creating the display functin for displaying the linked list

void display(struct Node *p){
    while(p!=NULL){
        cout<<" "<<p->data;
        p=p->next;
    }
}


int main(){
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,9,10};
    create1(A,5);
    create2(B,5);
    cout<<"first linked list:- ";
    display(first);
    cout<<endl;
    cout<<"second linked list:- ";
    display(second);
    cout<<endl;
    Merge(first,second);
    display(third);
    return 0;
}






