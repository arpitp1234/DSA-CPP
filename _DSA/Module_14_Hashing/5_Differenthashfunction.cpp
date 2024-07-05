/*

Different Hash function

 Different hash function are
    
    1)Modulous
    2)Midsquare
    3)Folding

    The requirement of hash fucntion is such that hash function is selected such that the value of element
     is uniformly distributed


    *)In linear probing size of hash table must be double the size of inserted element size of hash table is to be prime number
    so collosion must be prevented.

2)Midsquare:- This method suggest that whatever the key is do the square of key and take the middle digit.

            if(key=1)
                 do square (key)
                           =121

    while searching also we follow this procedure.

    agar square ke baad 5-6 digit number aa raha hai toh middle ke two digit number lo aur usme mod perform karo;.


3)Folding method:-

      suppose we have key=123347
        take two-two digit
                 +12
                 +22
                 +47


     This 92 be index in hash table.

     we can perform mod on result or we can add tow this digit also.

          92
           +9
           +2
           11

            1
           +1
            2

    Searching you should also perform same procedure.


=>If we as string key

             key="ABC"

 Take ascci code:-

            A    B   C
            65   66 67

            make it single no
                
                656667

    and now we can perform folding
                 
                 65
                 66
                 67
                 198

    
conclusion

You can design your hash function make sure always it get same result.

In jave they provide built in hash;



*/