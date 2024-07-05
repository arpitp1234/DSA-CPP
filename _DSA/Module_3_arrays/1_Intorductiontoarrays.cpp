/*------------------------------------------------1)Defining Arrays:------------------------------------------------------------------------------------------------------------*/

/*An array is collection of element of same type place in contiguous memory location that can be individually reference by uisng an index to unique indentifier*/

/*-------------------------------------------2)Scalar and Vector Variable---------------------------------------------------------------------------------------------------*/

/*Scalar Variable:- Those variable which have only single value are called as Scalar Variable*/
                              /*int x=10*/
/*Vector Variable:- Those variable which can store multiple value are called vector variable*/
                            /*int A[5]*/


/*Assinging value in variable*/
          /*A[2]=15*/


/*--------------------------------------------3)Declaration of Array and Intialisation-------------------------------------------------------------------------------------------*/
     /*i)int A[5]:This will allcate 5 memory places*/
     /*ii)int A[5]={2,4,6,8,10} means Array has element 2,4,6,8,10*/
     /*iii)int A[5]={2,4} means Array has element 2,4,0,0,0*/
     /*iv)int A[]={24,6,8,10}*/

/*-------------------------------------------------4)Accessing Element of Array-----------------------------------------------------------------------------------------------------*/   
    /*i)Printing Value:- Printf("%d",A[1])*/
    /*ii)Traversing:- Visiting to each value of the array is called as traversing
          Traversing in Array we can use for loop
         for(int i=0;i<5;i++){
            printf("%d",A[i])
         }
     iii)Printing any index of element by multiple method
            printf("%d",A[2])
            printf("%d",2[A])
            printf("%d",*(A+2))
    */

  
/*-------------------------------------------------4)Static and Dynamic Array----------------------------------------------------------------------------------------------------*/
/*Static Array:- The size of array is static*/
/*Dynamic Array:- The size of array is dynamic*/
           /*Once a array is declared it size cannot be modified*/
       /*void main()*/
         /*int A[5]:-It is declared before runnig of program so its memory will be in stack*/
      /*In C language when you declare size of variable it must be constant value*/
      /*In CPP languae we can create an array of any size at run time and it will create in static only whereas in C size of array should be decide at compile time only*/
/*For accessing anything in heap we must have a poointer*/

/*
void main()
  int A[5];
  int n;
  cin>>n;
  int B[n];

This part in CPP yaha par hamne array ke size ko runtime ke samay stack me banaya hai
*/



    
      







