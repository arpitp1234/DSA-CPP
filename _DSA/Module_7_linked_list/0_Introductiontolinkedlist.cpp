
/*Why we need Dynamic Data structure and linked list*/

/*we will understand it by two things*/
/*1)Problem with array*/
/*2)Difference between array and linked list*/

/*1) Problem with arrays:- */

/*i)Array is of fixed size[whenever array is created ,we enter fixed size and later we cannot increase and decrease the size of array]
=>So once created it remain same;

Why fixed size is problem= Unless you are same that you are going to store some number of element if you know the size (the no of element)
then we create an array of particular size,if you do not know,how many element you are going to store during the run time of the program
then we can not decide the size of array.

if we may take any random size then that size may be insufficient or it may be excess

For example:
      int A[10];
    
    In this array we cannot store more than 10 element 

    If we have more than 10 element hai during run time toh ham usko store nahi kar sakte agar haamre pass 2-3 element hai toh lot of space will
    be wasted

    Agar koi user element input kar raha hai,toh as a programmar hame pata nhi hoga ki waha par array ka size kya hoga

/*2)Difference b/w array and linked list

for arrays:
  for creating an array inside stack we say
  int A[5]=>Array size 5 ka stack me create ho jayenga

  int *p= new int[5]<= for creating array in heap we should create an pointer
    so benefit of array is that all of location in contiguous

For linked list 
  
   /*In linked list we do want a fixed size ,contiguous memory like in array

Linked list ke case me hame koi pata nahi ki user kitne element input kar raha hai,jitne be eleemnt input kar raha hai usko karne do

In linked list together elemnt space and pointer space together we called it as node

/*So this data structure is more flexible than array and size can grow and size can reduce and you can easily insert the new elment
and remove the elemnt form linked list

/*So we create linked list in heap so dyanmically we create a memroy

*/

