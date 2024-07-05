/*
1)Implemention of stack using arrays

For implementatiaon of stack using arrays we need fixed size array
size=5;
       -------------
     S [ | | | | | ]
       -------------

Top ka data type integer haon chachiye kyoki wah index ko point kar raha hai

Toh hame three thing chachiye

1)array 
2)array size
3)Top pointer

size=6 [ | | | | | | ]

Toh array ko stack banene ke liye ham insertion and deletion ek hi taraf se hoga,Joki right hand side

Defining Stack

struct Stack
{
 int size;
 int Top;
 int *S;
}

condition of empty stack
     if(Top==-1)

condition for full stack
     if(Top==size)
*/

/*Code for all operation of stack using arrays*/

/*----------------------------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int *S;
};

void create(struct stack *st){
    cout<<"Enter size:- ";
    cin>>st->size;
    st->top=-1;
    st->S=(int *)malloc(sizeof(int));
}
void Display(struct stack st){
    int i;
    for(int i=st.top;i>=0;i--){
        cout<<st.S[i];
    }
    cout<<endl;
}
void push(struct stack *st,int x){
    if(st->top==st->top-1){
        cout<<"stack overflow";
    }else{
        st->top++;
        st->S[st->top]=x;
    }
}
int pop(struct stack *st){
    int x=-1;
    if(st->top==-1){
        cout<<"stack underflow";
    }else{
        x=st->S[st->top--];
    }
    return x;
}
int peek(struct stack st,int index){
    int x=-1;
    if(st.top-index+1<0){
        cout<<"Invalid index";
    }
    x=st.S[st.top-index+1];
    return x;
}
int isEmpty(struct stack st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack st){
    if(st.top==st.size-1){
        return 1;
    }
    return 0;
}
int main(){
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    Display(st);
    cout<<peek(st,3);
    return 0;
}
