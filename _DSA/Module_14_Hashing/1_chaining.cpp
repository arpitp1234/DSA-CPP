/*Chaining

=>chaining is one of the method for avoiding collosion and is also open hash method.

=>It is implemented using array of pointer of linked list

=>So herer will look following operator

  1.Insert  2.Search  3.Anaylsis.  4.Delete.


1).Insert

=>we will insert using hash function
         
          h(x)=x%10;

=>In hash table keys are arrange in array of chains.

=>Hash table size is 10 and beyond this we are using extra spaces.
____________________________________________________________________________________________________________

2). Search

=>Use the hash function and then go to hash table and search in liked list.

=>Agar elemnt find hogay to successfull serach hoga warn unsuccesfull search.

_______________________________________________________________________________________________________________________________________

3).Anaylsis.

   Suppose we have element n=100;
                           
            so hash table size=10;

        Loading factor=>l=n/size (where n is no of elemnt)

  In every data structure we analyse it base on number of elemnet n,but here analysize loading factor.

So,Analysis of hashing is always done based on loading factor.

                n=100;
                size=10;
                 =100/10=10;

  So,loading factor is 10;

  it means at each location there are 10 key.
            ______________________________________________________________________________________________________________________

time for successful search=>

pehle hash function se index find karte hai jo constant time leta hai.
                    t=1 [computing hash fucntion];


Key jo wah 10 hai har index par minimum search key=1 and maximum search key=10 to average lenge jo 5 hoga

                       [t=1+l/2]

for avg unsuccessful search=>

key nah mil rahi hai toh ham entire linked list ko le rahe hoge

                    [t=1+l]

_________________________________________________________________________________________________________________________________________________

4)Delete=>

 For deleting use hash function,serach for elemnt if found delete it.

=>If we want key we can modify hash function.Instead of h(x)=x%10

=>So,if we have to select hash function such that keys are uniformly distributed.

________________________________________________________________________________________________________________________________________________
*/

/*Program for chaining.*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void SortedInsert(struct Node **H,int x){
    struct Node *t,*q=NULL,*p=*H;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(*H==NULL){
        *H=t;
    }else{
        while(p && p->data<x){
             q=p;
             p=p->next;
        }
        if(p==*H){
            t->next=*H;
            *H=t;
        }else{
            t->next=q->next;
            q->next=t;
        }
    }
}

struct Node *Search(struct Node *p,int key){
    while(p != NULL){
         if(key==p->data){
              return p;
         }
         p=p->next;
    }
    return NULL;
}
int hash(int key){
    return key%10;
}

void Insert(struct Node *H[],int key){
     int index=hash(key);
     SortedInsert(&H[index],key);
}

int main(){
    struct Node *HT[10];
    struct Node *temp;
    int i;
    for(int i=0;i<10;i++){
        HT[i]=NULL;
    }
    Insert(HT,12);
    Insert(HT,22);
    Insert(HT,42);
    temp=Search(HT[hash(33)],33);
    printf("%d",temp->data);
    return 0;

}