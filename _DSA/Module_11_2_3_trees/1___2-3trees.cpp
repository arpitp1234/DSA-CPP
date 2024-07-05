
                                                       /*2-3 trees*/

/*

=>2-3 trees are search tree like we have binary search tree

=>Binary search tree contain 1 key and 2 children.

=>Same thing is extended for multiple key and multiple children.

=>If you increase no of key then no of children can also increase.

=>For 2 key ,three child are possible.

=>So this type of tree are also called Multiway search tree or M-way search tree

                  here M= degree of tree.


=>So 2-3 tree are Multisearch tree with degree 3;

=>2-3 trees are height balanced search tree height balance search tree are called as B tree

=>B trees is general concept for any degree.

=>But here degree is 3 so we can say 2-3 tree are trees of degree 3.




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Rules of B-trees which is also applicable for 2-3 trees


i)All leaf node should be at same level.

ii)Each node has maximum of M children and a minimum of M/2 children or any number from 2 to the maximum

                      i.e [M/2] =  [3/2]=2;

iii)Keys are arranged in defined order within the node,all keys in the subtree to the left of a key are predecessor of the key
and on right are successor of the key.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



=>2-3 trees are B trees of degree 3,so with the help of 2-3 trees we are learning B tree.

Here every node can have 3 children possible left child,middle child and right child.


If there are 3 children then 2 keys are possible.


         For 2-3 trees.

                               | k1 | k2 |
                       
                    |  |  |      |  |  |     |  |  |
                       L            M           N

                    
                Here        K1<K2

                i)  L<k1       ii)k2<n        iii) k1<m<k2
    
Since,it is a search tree we cannot have duplicate elemnet.

          
Analysis:- 

      if height is given then max and min nodes are given by:-

                n(min)=2^(h+1)-1;
                n(max)= 3^(h+1)-1/(3-1);

      if node is given then max height and max node are given by:-

                h(max)= log2(n-1)-1;
                h(min)=log3[n.(3-1)+1]+1;



=>min and max height of 2-3 tree log n and height of B tree is always logarthminc

=>B tree or B+ tree are used in DBMS software

=>2-3 tree is type of B tree.
*/