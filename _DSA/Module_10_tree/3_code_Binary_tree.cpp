/*----------------------------------------Representation of binary tree--------------------------------------------------------*/

/*
There are two method for representation


         1.Array Representation
         2.Linked Representation



i)Array representation of binary tree

    In array representaion of binary tree we store the element level by level.

    if any element is at index i

          element => i
          left child=>2*i;
          right child=>2*i+1;

        Parent of any node will be [i/2]

    So filling binary tree in array either we will use formula or we will fill it by level by level.



ii)Linked representation of binary tree

     Here node is same as doubly linked list

          struct Node
          {
             struct Node *lchild;
             int data;
             struct Node *rchild;
          }

    Ham linked representation kehte hai linked list representation nahi kehte hai as lit is linear but tree is not linear.


    =>For any  shape binary tree if you represent using linked list ,if there are n node ,then there will be n+1 null pointer.


*/



/*--------------------------------------Tree Transversal------------------------------------------------------------------------------*/

/*
Traversing means visiting each node exactly once.A full traversal of a binary tree T produces a linear order of elemnt existion in T.

 If data structure is linear we can traverse by two method

                  First->last;
                  last->first;

 But when it is non linear i.e for binary tree the possible traversal are:- 

 i)Preorder:- (root)->(left)->(right)
 ii)Inorder:- left->(root)->right
 iii)Postorder:- left->right->(root);
 iv)Level order;- level by leverl.


Few imporatant points

1)Leaf degree 0
        if(p->lchild==NULL && p->rchild==NULL)

2)Node degree 2
        if(p->lchild && p->rchild)

3)degree 1 or degree 2
         if(p->lchild || p->rchild)

4)deg1

  if((p->lchilde != NULL && p->rchild==NULL) || (p->lchilde ==NULL && p->rchild !=NULL))

  ^ exor in c;

   writing above formula in form of exor.
     if(p->lchild != NULL ^ p->rchild !=NULL)


*/




/*Full program of binary tree*/

/*Program*/


#include<iostream>
#include<stdio.h>
using namespace std;

/*-------------------------Defining Node part ------------------------------------------------------------------------------------*/

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

/*-----------------------------Queue part--------------------------------------------------------------------------------------------*/

struct Queue{
    private:
    int front;
    int rear;
    int size;
    Node **Q;
    public:
    Queue(int a){
        size=a;
        front=-1;
        rear=-1;
        Q=new Node *[size];
    }
    ~Queue(){
        delete []Q;
    }
    void enqueue(Node *x){
        if(rear==size-1){
            cout<<"Queue is full";
        }else{
            rear++;
            Q[rear]=x;
        }
    }
    Node *dequeue(){
        Node *x;
        if(front==rear){
            cout<<"Queue is empty";
        }else{
            front++;
            x=Q[front];
        }
        return x;
    }
    int isemtpy(){
        if(front==rear){
            return 1;
        }
        return 0;
    }
    void Display(){
        for(int i=front+1;i<=rear;i++){
            cout<<Q[i]<<endl;
        }
    }
};


/*-------------------------------------------Stack part ------------------------------------------------------------------------------------*/

struct stack{
    int size;
    int top;
    struct Node **S;
};

void stackcreate(struct stack *st,int size){
    st->size=size;
    st->top=-1;
    st->S=new Node*[size];
}

void push(struct stack *st,struct Node *x){
    if(st->top==st->size-1){
        cout<<"Stack is full no elemnt can be inserted";
    }else{
        st->top++;
        st->S[st->top]=x;
    }
}
struct Node *pop(struct stack *st){
    struct Node *x=NULL;
    if(st->top==-1){
        cout<<"Stack underflow";
    }else{
        x=st->S[st->top--];
    }
    return x;
}

int isEmptystack(struct stack st){
    if(st.top==-1){
        return 1;
    }
    return 0;
}
int isFullstack(struct stack st){
    return st.top==st.size-1;
}

/*-------------------------------------Tree Part----------------------------------------------------------------------------------------------*/

class Tree{
    public:

    Node *root;
    Tree(){
        root==nullptr;
    }
    ~Tree(){}
    void createTree();
    void Preorder(Node *p);
    void Postorder(Node *p);
    void Inorder(Node *p);
    void Levelorder(Node *p);
    int Height(Node *root);
};
void Tree::createTree(){
    Node *p,*t;
    int x;
    Queue q(200);
    cout<<"Enter root value:- "<<flush;
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=nullptr;
    root->rchild=nullptr;
    q.enqueue(root);
    while(!q.isemtpy()){
        p=q.dequeue();
        cout<<"Enter the left child of "<<p->data<<":"<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=nullptr;
            t->rchild=nullptr;
            p->lchild=t;
            q.enqueue(t);
        }
        cout<<"Enter the right child of "<<p->data<<":"<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=nullptr;
            t->rchild=nullptr;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}
void Tree::Preorder(Node *p){
    if(p){
        cout<<p->data<<" ,"<<flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(Node *p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data;
        Inorder(p->rchild);
    }
}
void Tree::Postorder(Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->data<<","<<flush;
    }
}

void Tree::Levelorder(Node *p){
    Queue q(100);
    cout<<root->data<<" ,"<<flush;
    q.enqueue(root);
    while(!q.isemtpy()){
        p=q.dequeue();
        if(p->lchild){
            cout<<p->lchild->data<<" ,"<<flush;
            q.enqueue(p->lchild);
        }
        if(p->rchild){
            cout<<p->rchild->data<<", "<<flush;
            q.enqueue(p->rchild);
        }
    }
}

int Tree::Height(Node *p){
    int l=0;
    int r=0;
    if(p==nullptr){
        return 0;
    }
    l=Height(p->lchild);
    r=Height(p->rchild);
    if(l>r){
        return l+1;
    }else{
        return r+1;
    }
}


//for writing iterative function of tree traversal we need stack

void IPreorder(struct Node *p){
    struct stack stk;
    stackcreate(&stk,100);
    while(p|| isEmptystack(stk)){
        if(p){
            cout<<p->data;
            push(&stk,p);
            p=p->lchild;
        }else{
            p=pop(&stk);
            p=p->rchild;
        }
    }
}
void IInorder(struct Node *p){
    struct stack stk;
    stackcreate(&stk,100);
    while(p || isEmptystack(stk)){
        if(p){
            push(&stk,p);
            p=p->lchild;
        }else{
            p=pop(&stk);
            cout<<p->data;
            p=p->rchild;
        }
    }
}

void IPostorder(struct Node *p){
    struct stack stk;
    stackcreate(&stk,100);
    while(p || isEmptystack(stk)){
        if(p){
            push(&stk,p);
            p=p->lchild;
        }else{
            p=pop(&stk);
            p=p->rchild;
            cout<<p->data;
        }
    }
}

//Recursive function for counting no fo nodes in binary tree;

//counting all the node;

int count(Node *p){
    int x,y;
    if(p!=NULL){
        x=count(p->lchild);
        y=count(p->rchild);
        return x+y+1;
    }
}

//counting leaf node;
int leafcount(struct Node *p){
    int x,y;
    if(p!=NULL){
        x=leafcount(p->lchild);
        y=leafcount(p->rchild);
    }
    if(p->lchild==NULL && p->rchild==NULL){
        return x+y+1;
    }else{
        return x+y;
    }
    return 0;
}


//counting no of node of degree 2

int counttwo(Node *p){
    int x,y;
    if(p!=NULL){
        x=counttwo(p->lchild);
        y=counttwo(p->rchild);
        if(p->lchild && p->rchild){
            return x+y+1;
        }else{
            return x+y;
        }
    }
    return 0;
}


//counting node wiht degree1 and degree 2

int counttwoone(Node *p){
    int x,y;
    while(p!=NULL){
        x=counttwoone(p->lchild);
        y=counttwoone(p->rchild);
        if(p->lchild !=NULL || p->rchild!=NULL){
            return x+y+1;
        }else{
            return x+y;
        }
    }
    return 0;
}

//counting node with degree 1

int countone(Node *p){
    int x,y;
    if(p!=NULL){
        x=countone(p->lchild);
        y=countone(p->rchild);
        if((p->lchild != NULL && p->rchild==NULL ) || (p->lchild==NULL && p->rchild !=NULL)){
            return x+y+1;
        }else{
            return x+y;
        }
    }
    return 0;
}


//counting data of all element

int countdata(Node *p){
    int x,y;
    if(p!=NULL){
        x=countdata(p->lchild);
        y=countdata(p->rchild);
        return x+y+p->data;
    }
}


int main(){
    Tree t;
    t.createTree();
    cout<<endl;
    cout<<"Postorder:- ";
    t.Postorder(t.root);
    cout<<endl;
    cout<<"Preorder:- ";
    t.Preorder(t.root);
    cout<<endl;
    cout<<"Inorder:- ";
    t.Inorder(t.root);
    cout<<"Levelorder:- ";
    t.Levelorder(t.root);
    cout<<"Height :- ";
    cout<<t.Height(t.root);
    cout<<endl;
    return 0;
}