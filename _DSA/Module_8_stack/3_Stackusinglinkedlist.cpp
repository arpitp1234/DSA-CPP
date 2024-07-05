/*2)Implementaion of stack using linked list*/

/*    _______        ________          _______          _______
      |  |  | ---->  |  |   | ----->   |  |  | ----->   |   |  |
      -------        --------          -------          --------
       o(1)                                   o(n)
Stack me insertion and deletion ek hi end se hota hai,toh left hand size par time complexity o(1) toh ham insertion and deletion left 
hand size se karege

Inserting a new node or pushing

    p| top
   _______      _______      _______        __________       _________
   |  |  |----> |  |  |  --->|  |   | ----->|   |    |------>|   |   |
   -------      -------      --------       ----------       ---------

condition

1)if there is no elment then we say stack is empty

2)If we create a new node and it is not created then we say stack is full

*/

/*-------------------------------------------------------------------------------------------------------------------------------------*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class stack{
    private:
    Node *top;
    public:
    stack(){
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
    int stackTop();
    int isEmpty();
    int isFull();
    int peek(int pos);
};
void stack::push(int x){
    Node *t=new Node;
    if(t==NULL){
        cout<<"Stack is full";
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int stack::pop(){
    int x=-1;
    if(top==NULL){
        cout<<"Stack is empty";
    }else{
        x=top->data;
        Node *t=top;
        top=top->next;
        delete t;
    }
    return x;
}
void stack::display(){
    Node *p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int stack::stackTop(){
    if(top){
        return top->data;
    }
    return -1;
}
int stack::isEmpty(){
    return top?0:1;
}
int stack::isFull(){
    Node *t=new Node;
    int r=t?1:0;
    delete t;
    return r;
}
int stack::peek(int pos){
    Node *p=top;
    for(int i=0;p!=NULL && i<pos-1;i++){
        p=p->next;
    }
    if(p!=NULL){
        return p->data;
    }else{
        return -1;
    }
}
int main(){
    stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    stk.pop();
    stk.pop();

    stk.display();
    cout<<stk.peek(5);
    return 0;
}
























