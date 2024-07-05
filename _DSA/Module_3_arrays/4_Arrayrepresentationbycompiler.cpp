/*-------------------------------------------Array representation by compiler-------------------------------------------------------------------------------------------*/
/*When we create an array the compiler uske element ko access karne ke liye uske address ko access karta hai*/
/*Toh yaha par ham dekenge ki compiler 1d and 2d array uske element ko kaise acess karta ahi*/

/*---------------------------------------------------For 1D array in compiler-----------------------------------------------------------------------------------------*/
/*int A[5]={3,5,8,4,2}*/
/*Addr[A[i]]=L+i*W

L=Base Address;
i=index;
W=sizeofdataype
*/

/*-------------------------------------------------For 2D array in compiler----------------------------------------------------------------------------------------------*/
/*In row major mapping element are stored row by row*/
/*
A[k][L]=BA+(k-1)*(j-Lc)*b+(L-1)*b

BA=Base Address
K=Row subscript of elemnt whose address to be found
L=column subscript of elemtn whose element to be found
b=storeage size of one elemnt stored in array
Lc=lower limit of column(start column index if not give assume 0(zero)else (Lc-1))
i=Number of row of given matrix
j=Number of column of given matrix
*/

/*In column major mapping element are store column by column*/
/*Addr =BA+(L-1)*(i-Lr)*b+(k-1)*b
BA=Base address
K=Row subscript of elemnt whose address is to be found
L=Column subscript of elemtn whose address is to be found
b=storage size of one element stored in the array
Lr=Lowerlimit of row/start row index of matrix if not given assume 0(zero) else (lr-1)
i=Number of row of the give matrix
j=Number of column of the given matrix

*/
/*----------------------------------------------For 4D array in compiler----------------------------------------------------------------------------------------------------------*/

/*Formula for row major*/
          /*addr(A[i1][i2][i3][i4])=L0+[[i1*d2*d3*d4]+[i2*d3*d4]+[i3*d4]+i4]*W*/

/*Formula for column major*/
          /*addr(A[i1][i2][i3][i4])=L0+[i4*d3*d2*d1]+(i3*id2*d1)+(i*d1)+i1*/
        

        /*For row major :- Left or right*/
        /*For column major:-right to Left*/

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/













