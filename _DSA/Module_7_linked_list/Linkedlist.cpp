/*Linked List*/
/*
A linked list is a linear collection of data element ,called nodes each pointing to the next node by mean of a pointer

It is a data structure consisting of a group of nodes which together represent a sequence

Linked lit were developed in 1955 -1956 by Allen Newell,cliff shaw and Herber A.simon

It contain data field ,address field and link field
   
   
  1_)  Each node of list has two element

 for defining an node we have to define two things data and pointer

 i)Information or data:- It can be any type integer,float,double or any other type
 ii)Pointer: is pointing to next node,so pointer is of node type
  
   node is having pointer of node type,so it is having pointer of its own type

Information or data part may consist of one or more than one field.In other word linked list consist series of structure which
are not necessarily congtiguous,each structue contain one or more than one contiguous information field and a pointer to a structure
containing its successor

The last node of the list contain NULL ('\0) in the pointer field.The pointer contain the address of location where next information is stored;


 2_) Define node in programming

  For c    struct Node{
               int data;
               struct Node *next;
            }

     having a pointer of its own type,so such a structure is called a self referential structure

In cpp we define with same structure or we can also use class

*/
/*

3)Size of structure

    struct Node{
        int data;
        struct Node *next;
    }

    In any compiler if any integer is taking 2 bytes then pointer will take 2 bytes,if interger is taking 4 bytes then
    pointer will be taking 4 bytes

so every node is taking 4 bytes.

*/


/*
4)Node creating and accessibility
=> for creating a node we must have a pointer
     struct Node *p<----It is in stack

In c=>p=(struct Node *)malloc(sizeof(struct Node));
In cpp=>new Node

=>To access member of node structure node member are use arrow operator

   p->data=10;
   p->next=0

*/
/*
Type of linked list
There are threee types of linked list as given below
1)Singly linked list
2)Doubly linked list
3)Circular linked list
*/






