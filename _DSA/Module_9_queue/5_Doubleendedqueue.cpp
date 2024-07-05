/*Double ended queue(Dqueue)*/

/*q[][][][][][]*/

/*
Dequeue,it can be implemented using array or it can implmented using linked list here  we have take array

Dequeue me ham front and rear pointer ko both opeartion ke liye use kar sakte hai

fornt and rear dono ko delete bhi kar sakte aur dono ko insert bhi kar sakte hai
*/

/*

                       Queue
                       Insert  Delete
                front    No      Yes
                rear    front    No

                      Dequeue
                
                        Insert  Delete
                front    Yes     Yes
                Rear     Yes    Yes

There are two types of restricte dequeue

        input i/p restricted

             Dequee
            
            Insert    Delete
         
     front   No        Yes
     rear    Yes       Yes


     Output o/p restricted

           Dequeue

           Insert  Delete
    front   Yes      Yes
    rear    Yes      No

code likne ke liye four operation ki jarurat hai insert from fron,Delete fron front,insert from rear and delete from rear

*/