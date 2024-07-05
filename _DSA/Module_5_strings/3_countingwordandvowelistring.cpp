//Counting word and vowel in a string

//i)-------------------------------------------------------Counting no of vowels and consonant in string----------------------------------------


#include<iostream>
using namespace std;

int main(){
    char A[]="How are you";
    int vcount=0,ccount=0;
    for(int m=0;A[m]!=0 ;m++){
        if(A[m]=='a' || A[m]=='e' || A[m]=='i' || A[m]=='o' || A[m]=='A' || A[m]=='E' || A[m]=='I' || A[m]=='O' || A[m]=='U'){
            vcount++;
        }else if(A[m]>=65 && A[m]<=96 || A[m]>=97 && A[m]<=122){
            ccount++;
        }
    }
    cout<<"The number of vowel in string is:- "<<vcount<<endl;
    cout<<"The number of consonant in string is:- "<<ccount<<endl;
    return 0;
}
//ii)----------------------------------------------------Counting no of word in a string-----------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    char A[]="How are you";
    int i=0,word=0;
    for(int i=0;A[i]!=0 ;i++){
        if(A[i]==' '){
            word++;
        }
    }
    cout<<"The no of word in a string is:- "<<word++;
    return 0;
}

//------------------------------------------iii)Counting word if there is conitnous space between two words-----------------------------------

#include<iostream>
using namespace std;

int main(){
    char A[]="How are you";
    int i,word=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]==' '){
            continue;
        }else if(A[i]== ' '){
            word++;
        }
    }
    cout<<"The no of word in a string is:- "<<word+1;
    return 0;
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------





































