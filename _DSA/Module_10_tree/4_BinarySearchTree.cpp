
/*----------------------Binary Search Tree-------------------------------------------------*/

/*
Binary search tree is a binary tree that is either empty or in which every node contains only smalled value in its left subtree and only
larger value in its right subtree.


The binary tree is useful searching that's why it is known as binary search tree.

It is useful in searching an elemnet in less number of comparision.



Properties of Binary Search Tree:-

i)Eleemnt in binary will not have duplicates

ii)If we perform inorder traversal of binary search tree ,then we get elemtn in sorted order i.e in ascending order

iii)No of BST for n nodes

               2nCn/(n+1);

*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
    Node *lchild;
    int data;
    Node *rchild;
}*root=NULL;

void Insert(int key){
    struct Node *t=root;
    struct Node *r,*p;
    if(root==NULL){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL){
        r=t;
        if(key<t->data){
            t=t->lchild;
        }else if(key>t->data){
            t=t->rchild;
        }else{
            return;
        }
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
    }
    if(key<r->data){
        r->lchild=p;
    }else{
        r->rchild=p;
    }
}

struct Node *RInsert(struct Node *p,int key){
    struct Node *t=NULL;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->rchild=t->lchild=NULL;
        p=t;
        return t;
    }
    if(key<p->data){
        p->lchild=RInsert(p->lchild,key);
    }else if(key>p->data){
        p->rchild=RInsert(p->rchild,key);
    }
    return p;
}

//Inorder traverasl of binary search tree

void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d  ",p->data);
        Inorder(p->rchild);
    }
}


//function for search in binary tree

struct Node *Search(int key){
    struct Node *t=root;
    while(t!=NULL){
        if(key==t->data){
            return t;
        }else if(key<t->data){
            t=t->lchild;
        }else{
            t=t->rchild;
        }
    }
    return NULL;
}
//function for finding height



int Height(struct Node *p){
    int x,y;
    if(p==NULL){
        return 0;
    }
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}


//function for finding Inorder predecessor

struct Node *InPre(struct Node *p){
    while(p && p->rchild !=NULL){
        p=p->rchild;
    }
    return p;
}

//function for finding inorder successor

struct Node *Insucc(struct Node *p){
    while(p && p->lchild !=NULL){
        p=p->lchild;
    }
    return p;
}


/*Delete function for binary tree*/

//delete function will be recursive function

struct Node *Delete(struct Node *p,int key){
    struct Node *q;
    if(p==NULL){
        return NULL;
    }
    if(p->lchild==NULL && p->rchild==NULL){
        if(p==root){
            root=NULL;
        }
        free(p);
        return NULL;
    }
    if(key<p->data){
        p->lchild=Delete(p->lchild,key);
    }else if(key>p->data){
        p->rchild=Delete(p->rchild,key);
    }
    else{
        if(Height(p->lchild)>Height(p->rchild)){
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }else{
               q=Insucc(p->rchild);
                p->data=q->data;
                p->rchild=Delete(p->rchild,q->data);
            }
        }
    return p;
    }
   
int main(){
    struct Node *temp;
    Insert(10);
    Insert(5);
    Insert(25);
    Insert(30);
    Insert(45);
    Inorder(root);
    return 0;
}