/*Queue*/
/*
Queue is logical data structure which work on concept of FIFO i.e first in first out

Queue has tow end front and rear

Insertion is done at rear end and deletion is done from front end.

   Deletion                              Insertion
    A         B        C        D          E
   Front                                 Rear

Example
  i)Railway ticket;
  ii)ATM
  iii)Electricity and Telephone Bill
  iv)Fees Submission

ADT of Queue

   Data :-
      1.Spacing for storing element
      2.front->for deletion
      3.Rear->for insertion
    
    Operation

       1.enqueue(x):-inserting an element in queue;
       2.dequeue():- deleting element in queue;
       3.isEmpty():- checking queue is emtpy or not
       4.isFull():-checking queue is full or not
       5.First()=>first element in queue
       6.last()->last element in queue;
    
    queue can be implemented using two data structure:-
    array
    queue;
*/