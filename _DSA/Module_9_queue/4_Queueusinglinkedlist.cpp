/*Queue using linked list*/

//       [ 8|  ]-->[ 3| ]--->[9 | ]--->[ 4 |  ]


/*
1)Intially when queue is empty both front and rear will be null

            front==>NULL;
              rear==>Null;

      empty condition
             if(front==NULL)         

2)When first node is created then

    front and Rear [8 |  ]

    both front and rear should point on t

3)Full condiition

  since there is fixed size for linked list ,so we can insert as much element as we can

       Full condition
                 Node *t=new Node;
                 if(t==NULL)

    if new node it not created then is is full.
*/


/*Code for implementing queue using linked list*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
        cout<<"queue is full";
    }else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=t;
            rear=t;
        }else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct Node *t;
    if(front==NULL){
        cout<<"queue is empty";
    }else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}
void display(){
    struct Node *p=front;
    while(p){
        cout<<p->data;
        p=p->next;
    }
    cout<<endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}


