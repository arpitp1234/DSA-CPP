 /*------------------------------------Introduction to hashing--------------------------------------------------------------------------------*/

 /*Why we need Hashing
 
 =>Hashing  is useful for searching.
 =>If you have a list of keys and you want to search from then you can use hashing.


 =>We do two type of searching:-
     
      1.Linear:- O(n);
      2.Binary:- O(log2n);
  
 =>Here binary is faster,we have to do more faster searching,for which we do hashing.

 =>So,we want to search a key with time less than log2n;

 For this idea hashing has been introduced.

 =>Hashing will try to search key less than log2n times.


 Keys:- 8,3,6,10,15,18,4

 Linear=>O(n)=> A[8,3,6,10,15,18,4];
 Binary=>O(log2n)=> A[3,4,6,8,10,15,18];

Linear me ham unsorted array Lege and binary me ham sorted array lenge

 =>Hashing ke case me ham array banayege max element ke size aur phir jo element array me present hoga,usko naye wale array me usi index 
 par drop kar denge.

 [-|-|-|3|4|-|6|-|8|-|10|-|-|-|-|15|-|-|-|-|10]

 Toh yah par agar searching karni hai toh jo key search karni hai usi index par chale jayenge to time O(1);

 =>Lekin agar element koi bahut bada hoga toh hame size ka array lena padega toh space consumption ya space complexity bahut jyada hoga.
 =>Toh ham space complexity hasing ki reduce karne ke liye ham domain range wale idea ko use karege.
               Mapping function:-
                one-one
                one-many
                many-one
                many-many;

 =>Toh above me jo function bankar aaya hai woh hai
                [h(x)=x]

 Using hash function we will map the key on hash table so that for searching we use same has function for finding the element.

       function support two type of mapping
            ->one to one.
            ->many to one.

        Our function use one to one mapping
             
             h(x)=x;

 This function we call as ideal hashing because time take for searching,deletion and storing an element is constant.

 =>Time equal to time spend by hash function
  
So,this ideal hashing.

 Drawback of ideal hashing:-
 --------------------------
    The space required is very huge hash function h(x)=x is responsible for the drawback.

    So,hash function is giving the index.

 If we want to reduce the space then ,we have to modify the hash function

           modify hash function
                 h(x)=x%10
  
  This function will never give value greater than 9.So,Now we will use hash array of size (0-9);

 Drawback=>
 ---------
 
=>When tow keys are mapped on same place then we called it collision so there is collosion of keys.

=>so,two key are mapped on same location,then many to one mapping is there.
=>So,this modulous function is many to one function.

Now how to resolve this collsion.

     if function to one and there is collosion for solving there are two methods.

      
      Open hasing=>(we will conusme extra space beyond hash table)
        *chaining

      closed hashing=>(size of hash table is 10,so we will ustilised thatn much space only)
        * open addressing
         1.Linear probing.
         2.Quadratic probing.
         3.Double hasing.
         

*/