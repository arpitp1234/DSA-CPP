/*
Double Hashing

Here we will use two hash function one the basic hash function and if there is is collosion,then other hash function will keep them.


                       h1(x)=x%10

                       h2(x)=(k-(x%k))

                h'(x)=(h1(x)+i*h2(x))%10;

                    where i=0,1,2,3

        R is a prime number which is smaller than size of hash table.

  size of hash is 10 and less than 10 neareset prime number is 7

               so R=7 [for hash of size =10];


i)It should never give the result 0

ii)It should try to provoke other location mean where there is a collosion then is should give index in same pattern,it should give 
index,such that all space is utilised

             we will use regular hash fucntion

                     [h1(x)=x%10]

    if there is collosion then we will use modify function

                 h'(x)=(h1(x)+i*h2(x))%10

                        i=0,1,2,3,.............


*/