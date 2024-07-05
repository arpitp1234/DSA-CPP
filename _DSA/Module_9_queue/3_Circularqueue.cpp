/*Circular queue*/

/*
size=7
   Q -1[][][][][][][
      FR
   Q[][10][][][][]]
     F R

   Q[][10][8][9][6][3][2]

last delete some elemnt from above queue
    Q[][][][9][6][3][2]

Toh rear jab array ke size ka ho jayega aur front ke befor elemnt ke liye space rahega toh ham rear ko circular move karege phir se starting
index par lekar jayenge

      Q[15][20][][9][6][3][2]
            R   F
    
    we will not use space where front will point.

    because jab use kar lege toh front and rear hamaar ek hi place par aa jayega joki queue emtpy ki condition lekin hamar queeu full hai

    so we will implement ciruclar queue over an array by moving front and rear circularay

    Represe+ting circular queue

    circular queue ko use karne ke liye ham mod operation ko use kar sakte hai;


Formula for cirucular movement inside linear array

To give cirulcar movement inside an array wheneever we go past ,the last elment
of the array ,it should come back to beginning of the array

Thus when we move arround an arry of size 5 folloing sequenece for location should be generated

0 1 2 3 4 0 1 2 3 4
i=(i+1)%5  array of size 5
i=(i+1)%max arry of size max

Expression use for circular movement

i    (i+1)%5
(0+1)%5=1;
(1+1)%5=2;
(2+1)%5=3
(3+1)%5=4;
(4+1)%5=0

i wraps around the array

i=(i+1)%5

0 1 2 3 4 0 1 2 3 4 ...........

or 

we can also use formula
 Rear=(Rear+1)%size will give us circula value

So cirucular queeue beest method for implement queue using array

*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q,int size){
    q->size=size;
    q->front=0;
    q->rear=0;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is full");
    }else{
        q->rear=(q->rear+1)% q->size;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q){
    int x=-1;
    if(q->front==q->rear){
        cout<<"Queue is empty";
    }else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    int i=q.front+1;
    do{
        cout<<q.Q[i];
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    cout<<endl;
}
int main(){
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    Display(q);
    dequeue(&q);
    return 0;
}