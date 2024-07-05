/*Priority Queue*/
/*
In priority queue every element of the queue has some priority and based on that priority it,weill processed so the element
of more priority will processed befor the element which have less priority

Suppose two element have same priority,then in that case FIFO rule will be follow means the elemnet which come first in 
the queue will processed further


In computer implementation ,priority queue is used in the CPU Schedule algorithm in which CPU had need to process those
processed first which have more priiortiy


Linked list implementation of priority queue

First we have a need to define the structure of elment which will be used for priority queueu

struct pq
{
    int priority
    int data;
    struct Pq *link;
}
*/
/*operation 
Add;- Add operation is priority queue is same as insert operation in sorted linked list
      Here we insert a new element on the basis of priority of new element;
      The new element will be inserted before the elment which has less priority than the new element;

Delete:- Delete element will be the deletion of first element of list becaurs it has more priority than other elemnet of the queue;

*/