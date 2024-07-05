                                         /*Introduction*/

/*character set/ASCII code*/
/*character array*/
/*string*/
/*creating a string*/
/*reading/writing a string*/



/*-----------------------------------1.character set/ASCII code------------------------------------------------------------------------------*/

/*character set is a set of character that is supported by programming language*/

/*A character denoted any alphabet ,digit or special symbol used to represent information*/

/*=> We know everything in our computer system work on binary so for every character we define with a set of number*/

/*For every character there is a code define that is the standard code ,every electronic follow these code and these code are ASCII code*/

/*ASCII code are only for english language*/
/*For other language every character is define in unicode*/
/*For everything on keyboard there is ascii code available*/

/*ASCII code*/
  /*A:- 65*/    /*a:- 97*/           /*0:- 48*/
  /*B:- 66*/    /*b:- 98*/           /*1:- 49*/
  /*C:- 67*/    /*c:- 99*/           /*2:- 50*/


  /*Z:- 90*/     /*z:- 122*/         /*9:-57*/

  /*enter -10*/
  /*space bar->13*/
  /*escape->27*/

  /*=> ASCII code are starting from*/
               /*0-127*/
  /*so there are total 128 ascii code*/
  /*7 bit are sufficient to represent any of above symbol*/
                    /*7 bit=2*7=128*/
                        /*0+127=128*/
/*Jab bhi ham character use karte hai memory (main memory ) me 7 bit toh allocate hoge nahi 1 byte(8 bit ) memory ko allocate karega ,Isliye 
size of character 1 byte hota hai*/

/*Unicode are for all the language so ASCII code become subset of Unicode*/
/*Unicode take 2 byte of memory*/
         /*2 byte=16 bit*/
/*16 bits can be represented in form of hexadecimal code*/
/*Hexadecimal code are represented in 4 bit*/
      /*FOR ex C035*/

/*----------------------------------2.Character array--------------------------------------------------------------------------------*/

/*Now we will discuss about creating characte array*/

/*1st Method char X[5]<- declaration*/
/*2nd Method char X[5]={'A','B','C','D','E'}*/
/*3rd Method X[]={'A','B','C','D','E'}*/
/*4rd Method char X[5]={65,66,66,67,6,8,69}*/
       /*Toh ham ASCII code ke help se bhi declare kar sakte hai*/
/*5th method:- */
       /*char X[5]={'A','B'}*/
             
/*-------------------------------------3.String----------------------------------------------------------------------------------*/

/*A string is array of character */
/*A string is define as any any group character enclose between doubel quotation mark*/
/*The end of the string is marked with single character '\0',the NULL character which have ASCII value zero*/
/*So for storing name,sentences word or para we use the strign*/
             /*String ->set of character*/

/*String ke case me end poiint hota hai that's why hamko pata chal jaye ,string kaha khatam ho raha hai or end point null character
'\0' hota hai*/
                    
                      /*'\0'  --->end string character
                            ---->Null character
                            ------->string terminator
                             --------->stirng delemeter*/
                    
/*IN Java end of character is known by its length but in c and cpp it is known by null character*/

/*
   char name[10]={'j','o','h','n'}<----array of character
   char name[10]={'J','O','H','N','/0'}<----string
*/

/*-------------------------------4.Creating a String ---------------------------------------------------------------------------------*/

 /*Intializatin of string
   string can be intialised at the time of declaration by using a loop in the program
 */
     /*Intialisation +declaration*/
   /*AT the time of declaration ,the strign can be intialise array in following manner*/

/*1) char name[10]="JOHN"*/
/*2)char name[10]={'J','o','H','N','\0'}*/
/*3)char name[]="JOHN"*/
    /*because double quote me hai toh '/0' automatically include ho jayenga*/
/*4)char name[]={'j','o','h','n','\0'}*/
            /*size yaha 5 hogi ,null character also include hoga*/

/*-----------------------------------------5:- Reading /writing a string-----------------------------------------------------------------*/

/*char name[10]={'J','o','H','N','\0'}*/

/*writing a string*/
/*printf ("/s",name);*/

/*Reading a string*/
/* scanf('/s',name)*/
/*Agar hame mulitple word ki string read karni hai toh hame function gets() use karna hoga*/
/*-----------------------------------------------------------------------------------------------------------------------------------------*/