/*2)Changing case of string*/
/*While changing case of stirng we will use ascii code*/

   /*case1:lowercase to uppercase*/
   /*case2:uppercase to lowercase*/
   /*case3:toggle the alphabet in string*/

/*Lowercase to uppercase*/


#include<iostream>
using namespace std;

int main(){
    char A[]="welcome";
    int i=0;
    for(int i=0; A[i]!= '\0';i++){
        A[i]=A[i]-32;
        cout<<A[i];
    }
    return 0;
}

/*Uppercase to lowercase*/

#include<iostream>
using namespace std;

int main(){
   char A[]="WELCOME";
   int i=0;
   for(int i=0;A[i]!= '\0';i++){
       A[i]=A[i]+32;
       cout<<A[i];
   }
   return 0;
}

//case3:Toggle the alphabet in string

#include<iostream>
using namespace std;

int main(){
   char A[]="wELcome";
   int i;
   for(int i=0;A[i]!= '\0';i++){
      if(A[i]>65 && A[i]<=97){
         A[i]+=32;
         cout<<A[i];
      }else if(A[i]>='a' && A[i]<=122){
         A[i]-=32;
         cout<<A[i];
      }
   }
   return 0;
}




















































































































