/*AVL Trees*/

/*
*)AVL trees are height balanced search tree

*)Adelson(A),Velskii(V) and Landi(L) developed the technique of balanceing the height of binary tree.

*)AVL tree is balanced binary search tree.In AVL tree,balance factor of every node is either -1,0,+1;

=>height of tree is balanced using balanced factor

      Balance factor=height of left subtree- height of right subtree

      bf=hl-hr=> {-1,0,1}

So,this balance factore we calculate on every node of binary search tree and now we will call as AVL tree and balanced factor of AVL
tree must be either -1,0,1 and it should be any of these.

                we can write
                    bf= |hl-hr| <=1    balanced
                    bf=|hl-hr|>1       imbalanced

Every node should be balanced if any node is imbalance,then we say tree is imbalanced

So,to balanced a tree we perform a rotation.

*/
/*Rotation ot time of insertion i.e at time of creating of AVL Tree*/
/*

i)LL-Rotation
ii)RR-Rotation
iii)LR-Rotation
iv)RL-Rotation
*/


/*Full program for AVL Trees*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//function for creating the node
struct Node{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
}*root=NULL;

//function for calcualtion tree height

int NodeHeight(struct Node *p){
    int hl,hr;
    hl=p && p->lchild ? p->lchild->height:0;
    hr=p && p->rchild ? p->rchild->height:0;
    return hl>hr ? hl+1:hr+1;
}
//function for balance factor

int Balancefactor(struct Node *p){
    int hl,hr;
    hl=p && p->lchild ? p->lchild->height:0;
    hr=p && p->rchild ? p->rchild->height:0;
    return hl-hr;
}
//left rotation
struct Node *LLRotation(struct Node *p){
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    if(root==p){
        root=pl;
    }
    return pl;
}
//right rotation

struct Node *RRRotation(struct Node *p){
    struct Node *pl=p->rchild;
    struct Node *plr=pl->lchild;
    pl->lchild=p;
    p->rchild=plr;

    p->height=NodeHeight(p);
    pl->height=NodeHeight(pl);
    if(root==p){
        return pl;
    }
    return pl;
}

struct Node *LRRotation(struct Node *p){
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;

    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    if(root==p){
        root=plr;
    }
    return plr;
}

//right left rotation

struct Node *RLRotation(struct Node *p){

      struct Node *pl=p->rchild;
      struct Node *plr=pl->lchild;

      pl->lchild=plr->rchild;
      p->rchild=plr->lchild;
      plr->rchild=pl;
      plr->lchild=p;

      pl->height=NodeHeight(pl);
      p->height=NodeHeight(p);
      plr->height=NodeHeight(plr);

      if(root==p){
        root=plr;
      }
    return plr;
}

//Insertfunction:- Same recursive insert function as in binary search

struct Node *RInsert(struct Node *p,int key){

    struct Node *t=NULL;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->height=1;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key<p->data){
        p->lchild=RInsert(p->lchild,key);
    }else if(key>p->data){
        p->rchild=RInsert(p->rchild,key);
    }
    p->height=NodeHeight(p);
    if(Balancefactor(p)==2 && Balancefactor(p->lchild)==1){
        return LLRotation(p);
    }else if(Balancefactor(p)==2 && Balancefactor(p->lchild)==-1){
        return LRRotation(p);
    }else if(Balancefactor(p)==-2 && Balancefactor(p->rchild)==-1){
        return RRRotation(p);
    }else if(Balancefactor(p)==-2 && Balancefactor(p->rchild)==1){
        return RLRotation(p);
    }
  return p;
}

//Inorder Traversal

void Inorder(struct Node *p){
    if(p!=NULL){
         Inorder(p->lchild);
         printf("%d ",p->data);
         Inorder(p->rchild);
    }
}

int main(){
    root=RInsert(root,50);
    RInsert(root,10);
    RInsert(root,20);
    Inorder(root);
    return 0;
}