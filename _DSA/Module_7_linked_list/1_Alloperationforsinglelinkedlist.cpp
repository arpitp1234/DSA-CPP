/*All the operation for single single linked list*/

#include<iostream>
#include<limits.h>

using namespace std;

//1.Defining the node in linked list

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

//2.Creating a node in linked list

void create(int A[],int n){
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

//3.Display a linked list 

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}


//now we will write recursive function for the displaying the linked list

void Recursivedisplay(struct Node *p){
    while(p!=NULL){
        cout<<p->data;
        Recursivedisplay(p->next);
    }
}

//4.Counting the no of nodes in linked list

int count(struct Node *p){
    int len=0;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    return len;
}

/*writng above function as recursive function*/

int Rcount(struct Node *p){
    if(p!=NULL){
        return Rcount(p->next)+1;
    }else{
        return 0;
    }
}


//5.Finding the sum

int sum(struct Node *p){
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

/*writing above function as recursive function*/

int Rsum(struct Node *p){
    if(p==NULL){
        return 0;
    }else{
        return Rsum(p->next)+p->data;
    }
}

//6.Finding the maximum elemnt in linked list

int Max(struct Node *p){
    int max=INT_MIN;
    while(p){
        if(p->data>max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}


//Recursive function for maximum element

int RMax(struct Node *p){
    int x=0;
    if(p==0){
        return INT_MIN;
    }
    x=RMax(p->next);
    if(x>p->data){
        return x;
    }else{
        return p->data;
    }
}


//7.Searching in Linked list

/*we know there are two type of search*/

/*
1.LinearSearch;
2.BinarySearch;

Binary search cannot be perform on the linked list as we cannot go to the directly to the middle of linked list;
*/
struct Node *linearsearch(struct Node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

struct Node *Recursivelinearsearch(struct Node *p,int key){
    if(p==NULL){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return Recursivelinearsearch(p->next,key);
}

//Improving the linearsearch

struct Node *search(struct Node *p,int key){
    struct Node *q;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
}

//8.Inserting in linked list

void insert(struct Node *p,int position,int x){
    struct Node *t;
    if(position<0 || position>count(p)){
        return ;
    }
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(position==0){
        t->next=first;
        first=t;
    }else{
        for(int i=0;i<position-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

//9.Inserting in sorted linked list

void sortedInsert(struct Node *p,int x){
    struct Node *t,*q=NULL;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
    }else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }else{
            t->next=q->next;
            q->next=t;
        }
    }
}

//10.Deleting a node in the linked list

int Deletes(struct Node *p,int position){
    struct Node *q;
    int x=-1;
    if(position<1 || position>count(p)){
        return -1;
    }
    if(position==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }else{
        for(int i=0;i<position-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        return x;
    }
}


//11.check if a linked list is sorted or not

int isSorted(struct Node *p){
    int x=INT_MIN;
    while(p!=NULL){
        if(p->data<x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

//12.Removing the duplicate element from sorted list

void Removeduplicate(struct Node *p){
    struct Node *q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}


//13.Reversing a linked list

/*
there are two method for reversing a linked l ist

1.reversing a linked list
2.reversing link

*/

//reversing a linked list

//method 1;

void reversedata1(struct Node *p){
    int *A,i=0;
    struct Node *q=p;
    A=(int *)malloc(sizeof(struct Node)*count(p));
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        q--;
    }
}
//method2
void reversedata2(struct Node *p){
    int *A;
    int i=0;
    p=first;
    A=new int[count(p)];
    while(p!=first){
        A[i]=p->data;
        p=p->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL){
        p->data=A[i];
        p=p->next;
    }
}
//3.reversinglink

void reversinglink(struct Node *p){
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}







int main(){
    int A[]={3,4,5,7,10};
    create(A,5);
    return 0;
}





































































































































































































































































































































































































































































































































