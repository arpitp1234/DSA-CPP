/*Comparing the strings*/
//We will compare the strings lexicographically

/*
lexicographically:- The lexicographic or lexicographically order is generalisation of the alphabetical order of the dictionaries to sequence
of reordered symbols or more generally of element of a totally ordered set
*/



//Comparing Strings
  
//Case1: Two strings are equal or not
            
            //A----------->Painter
            //B----------->Painter
/*In both above string the character are same so they will come on to the same place in dicitionary so both string are equal*/


//case2:String 1 is smaller than string 2
            //A----------------->Painter
            //B----------------->Painting
            //In dicitionary painter will come before painting
//Therefor painter is smaller than the painting


//case3:String 1 is greater than the string 2

/*Toh yaha par hamare above case me painting dicitionary me baad me aayenge painter ke mukabale painting is greater than the painter*/

/*Therefor string 1 is greater than the string 2*/

//Code for comparing the string
//Method 1

//#include<iostream>
//using namespace std;
//
//int main(){
//    int i,j;
//    char A[]="painter";
//    char B[]="painting";
//    for(i=0,j=0;A[i]!= '\0' || B[j] != '\0';i++,j++){
//        if(A[i] != B[j]){
//            if(A[i]<B[j]){
//                cout<<"String A is smaller than string B"<<endl;
//                break;
//            }else{
//                cout<<"String A is greater than string B"<<endl;
//                break;
//            }
//        }
//    }
//   if(A[i]=='\0' && B[j]=='\0'){
//       cout<<"Both string are equal";
//   }
//   return 0;
//}
//Method 2

#include<iostream>
using namespace std;

int main(){
    string firststring="Painter";
    string secondstring="painting";
    int equalorNot;
    equalorNot=firststring.compare(secondstring);
    if(equalorNot==0){
        cout<<"String 1 && String 2 are equal"<<" \n";
    }else if(equalorNot>0){
        cout<<"Stirng 1 is lexicographically greater than string 2"<<endl;
    }else{
        cout<<"String 1 is lexicographically smaller than string 2"<<endl;
    }
    return 0;
}





















































































































































































































