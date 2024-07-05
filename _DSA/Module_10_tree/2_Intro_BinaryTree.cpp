/*Binary Tree*/
/*

i)Introduction to binary tree.

Binary tree is a special data structure in which each node can have atmost 2 children.Thus is binary tree each node has either
0 child or 1 child or 2 child.

  For binary Tree 
        degree(Tree)=2;
        child={0,1,2}

i)Formula for no of tree if n nodes are give us :-
                                [T(n)=2nCn/(n+1)];
                                                    \\This is called as catalan number.

        For any n maximum height tree=2^(n-1);

ii)Another formula knowing the no of binary tree
                
                T(n)=  summation(T(i-1)*T(n-i)); :- Recurisve formula
                       where i=1 to i=n;

                T(n)=2nCn/n+1;<= combination formula.

*/

/*--------------------------------------------------------------------------------------------------------------------------------------------*/



/*ii)Labelled node and unlabelled node

    Labelled node - which have numbering on the node
    unlabelled node:- which do not have any  numbering on the node;


For unlabelled node number of binary tree

                      T(n)=2nCn/(n+1)

For labelled node 
      no of binary tree:- T(n)=2nCn/(n+1)*n!
*/



/*------------------------------------------------------------------------------------------------------------------------------------*/

/*iii)Height vs node in binary tree



i)If we know the height of binary tree what could be minimum no of nodes and what could be maximum no of nodes
                                  
                                    Or
  If nodes are given what could be minimum height and what could be maximum height.


     a)If height is given.

        Formula for min nodes

                       n(min)=h+1;
        
        formula for max node
           
                       n(max)=2^(h+1)-1;

      
      b)If nodes are given:-

                     h(min)= log2(n+1)-1;

                     h(max)=n-1;


        

        conclusion:- 
                     
                range for height of binary tree

                    log2(n+1)-1 <= h<= n-1;

                thus height of binary tree is from O(log2n) to O(n)


                no of nodes in binary tree


                   h+1 <= n <= 2(h+1)-1;

*/

/*--------------------------------------------------------------------------------------------------------------------------------------*/


/*iv)Relation between internal and external node


Here we are going to find relationship b/w internal nodes and external node


    no of nodes with deg(0)= no of nodes with deg(2)+1;

*/

/*-------------------------------------------------------------------------------------------------------------------------------------------*/

/*V) More points for binary tree*/

    /*   i)Rooted Binary tree


         A rooted binary tree is a binary tree that satisfies following 2 properties

         :It has root nodes
         :Each node has atmost 2 children.
     

     
       ii)Full / Strictly binary tree

         A binary tree in which every node has either 0 or 2 children is full binary tree

         Full binary tree is also called as strictly binary tree.
     

        iii)Complete/Perfect Binary tree

         A complete binary tree is a binary tree that satisfies following 2 properties

                   i)Every internal node has exactly 2 children
                   ii)All the leaf nodes are at same lever

        complete binary tree is also called as perfect binary tree.


*/


/*-------------------------------------------------------------------------------------------------------------------------------------------*/


/*

VI) 

i) Maximum number of nodes at any level "L" in binary tree= (2^L);


ii)Expression Evaluation

        We know that arithmetic operators are binary opeartor it means binary tree can represent an algebric expression.


        For example ,consider expression E such as

                       E= V+U/X *Y -Z

        Before construction the binary tree for expression E first we consider the precendence of the operation that lies in the expression:-

        i)^ (exponentiation) has highest precendence

        ii) / and * have highest precendence and associativity L-R

        iii) + and - have lowest precendence

*/

                            

/*-----------------------------------------------------------------------------------------------------------------------------------------*/

/*
VII) Elaboration strict binary tree (tree having 0 or 2 children)

    =>strict binary tree is also called proper binary tree or complete binary tree

                  i)Finding relation

                      i)Height vs node
                      ii)Internal vs external node.


    => Height vs node of strict binary tree

         i)If height is given -

           minimum nodes:-        n(min)=2*h+1
           maximum nodes:-        n(max)=2^(h+1)-1;

         ii)If nodes are given
             
           minimum height :-   h(min)=log2(n+1)-1;
           maximum height:- h(max)=(n-1)/2;


    =>Range for strict binary tree

             for height:-

                  log2(n+1)-1 <= h< =(n-1)/2
        
             for nodes:-
                
               (2*h +1)  <= n <= (2^(h+1) -1)

     =>Internal vs external node of strict binary tree

                  e=i+1
                e=leaf node
                i=non leaf node.

*/

/*---------------------------------------------------------------------------------------------------------------------------------------------*/
/*
VIII)n-ary tree

n-ary tree:- n mean degree of a tree and degree means every node in tree can have at most n children and not more than three children

            3-ary tree :- Every tree can have atmost 3 children

            4-ary tree:- Every tree can have atmost 4 children.

*/

/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
VIII) strict n -ary tree
 
    A strict n -ary tree is that in which every node can have exactly 0 children or exactly n children

   
   => Analysis of m-ary tree

         if Height is given.

             min nodes=> n=m*h+1

             max nodes=> n= (m^(h+1)-1)/ (m-1)

       
        if n nodes are given:-

                 h=logm[n(m-1)+1]-1;
                 
                 h=(n-1)/m;     


        The purpose of these analysis to know space and time taken by when we really use them.            


     =>Internal node vs External node


          for m-ary tree :- e=(m-1)*i+1;

*/


/*----------------------------------------------------------------------------------------------------------------------------------------*/