/*Red Black Trees*/
/*
1)Its a height Balance Binary search tree similar to 2-3-4 tree.

     Height Balance search tree=AVL

      means if red and black rule ka violation hoga toh ham rotation perform karege.

2.Every node is either red or black.

3.Root of tree is black.

4.NULL is also Black.

5.Number of Black on path from root to leaf are same.

6.No two consequtive,parent,children of red are Black.

7)New inserted node is Red.

8)Height is logn<= h<= 2logn.



        Therefore are two approach for adjustment

            i)Recoulouring          ii)Rotation.


i)Recolouring:- For new inserted node if its parent is red and its uncle is red,then what to do recolour the node,change parent and uncle black
and newly inserted will remain red and parent of (uncle and parent ) should be red.

ii)Rotation:-If parent and uncle colour are different then perform rotation.

*/


/*[There are several similarity between Red Black trees and 2-3-4 trees.]*/

