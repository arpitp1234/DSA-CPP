/*
1.Queue using single pointer
2.Queue using front and rear(two pointer)
3.Drawback of Queue using array
*/

/*-------------------------------------------1.Implementing of queue using single pointer-----------------------------------------------*/

//size=7

/*
  Q [][][][][][]
   -1

Inserting :-
   q[5][7][15][8][6][][]
                  R

Inserting me time constant rahega
     time complexity o(1)

For Deleting 
  Q[][7][5][8][6][2][]
               R
Q [7][15][8][6][2][]

Time for deleting an element is O(n);


/*2.-------------------------------------------------2.Queue using two pointer-----------------------------------------------------------*/

/*

   Q[][][][][][][]
    fR

Jab ham queue me single pointer ki jagah double pointer lege toh deletion wala time complexity reduce ho jayega

so tow pointer ke case me instead of shifting we will move pointer which will reduce the time complexity.

Intially 
  front=rear=-1;

i)Insert
  for inserting we have to move rear pointer and insert an element

  size=7
        Q[6][8][10][12]
    
    taking O(1) time for insertion

ii)Deletion
        Q[][][10][12][]
              F   R
move front and delete an elment so,int is taking constant ime o(1)

Rear is upon last elemnet and front is before first element

So,both enqueue and dequeue taking constant time so our queue has become faster

      equeue->O(1)
      dequee->O(1)

for queue is emtpty front==rear
     i)empty:-
        if(fornt ==rear){}

    ii)agar front pointer point kare first element na ki first elemetn ke befor par
        then 
            (front>rear)
        for queue is full
               if(rear==size-1)
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Queue{
    private:
    int size;
    int front;
    int rear;
    int *Q;
    public:
    Queue(int a){
        size=a;
        front=-1;
        rear=-1;
        Q=new int[size];
    }
    void enqueue(int x){
       if(rear==size){
         cout<<"Queue is full";
       }else{
          rear++;
          Q[rear]=x;
       }
    }
    int dequeue(){
        int x=-1;
        if(front==rear){
            cout<<"Queue is emepyt";
        }else{
            front++;
            x=Q[front];
        }
        return x;
    }
    void display(){
        for(int i=front+1;i<=rear;i++){
            cout<<Q[i]<<endl;
        }
    }
};
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(40);
    q.display();
    q.display();
    q.display();
    return 0;
}


/*drawback of queue using array*/

/*
size=7

Q[][][][8][10][6][9]

Here we will discuss 
      1.Drawback
      2.Solution
          i)Resetting Pointer
          ii)circular queue;

*/


/*1.Drawback*/

/*
size=7;
    Q[][][][8][10][6][9]
          F           R

Kyoki ham Queue me front ko insert nah kar sakte toh front ke pehle ki space ustilised nahi ho sakti

1st Drawback:we cannot use space fo deleted element
2nd Drawback:Every location can be used only and only once used we cannot reuse them.

size=7;

Q[][][][][][][9]
            f R
size=7
Q[][][][][][][]  <= A situation where queue is emtpy as well as full also.
             fR

1.Resettin pointer

At any time queue is becoming emtpy at any place bring front and rear pointer at the beginnig

  Q[][][][][][]
             FR

  Q-1[][][][][][]

  so whenever queue become empty bring them to index-1 so we can reuse the place

  isse jab queue poori tarah empyt ho jayeg to use reuse kar sakte hai

 Leking jab queue empty na ho toh

    So,theis method does not guarantee that their space will reuse definitely if queue in not becoming empty at any time,so
    we cannot reset them or we can ever insert new element

So above this proble could be solve using circular queue;
*/