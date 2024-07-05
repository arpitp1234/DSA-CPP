/*Binary Heap as priority queue*/

/*

Priority queue:- It is realted to insertion and deletion ,element will have priority and they will inserted along with the priority 
and when deleetion always highest element priority element will be deleted.


            we have to decide it earlier:-
                              Larger element =>Highest priority
                              Smaller element=>Highest priority.

            
        For inserting=>inserting the way element in given.
        For deleting=>element with highest priority is deleted.
                       After deleting shifting of element is also require.

            
            Delete==>        search  + shift
                               n         n
           
              time complexity= O(n);

        
        Toh yaha deletion jyada time le raha hai.

     ===>Toh ham given element ko heap me convert kar denge

                Insertion=>O(logn);
                Deletion=>O(logn);

So heap se hamne deletion time kar diya as
                       logn<n;


*So heap is helping in implementing priority queue
*So,heap is best data structure for implementing queue.


*Heap ke case me insertion and deletion balanced or same time le rahe hai,time get distributed we can also use array for implmenting
priortiy queue,but here deletion time jyada ho jayega.

*If we say smaller element highest priority,then use min heap.



*/