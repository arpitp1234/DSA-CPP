/*Here we are going to check that whether two string are anagram or not*/

#include<iostream>
#include<string.h>
using namespace std;

int anagram(int H[]){
    for(int i=0;i<26;i++){
        if(H[i]>0 || H[i]<0){
            return 0;
        }
    }
    return 1;
}
int main(){
    char A[]="abcdefghijklmnopqrstuvwxyz";
    char B[]="zyxwvutsrqponmlkjihgfedcba";
    if(strlen(A) != strlen(B)){
        cout<<" It is not a anagram";
        exit(0);
    }
    int i,j,H[26]={0};
    for(int i=0,j=0;A[i]!= '\0' && B[j]!= '\0';i++,j++){
        H[A[i]-97]+=1;
        H[B[i]-97]-=1;
    }
    int k=anagram(H);
    if(k==1){
        cout<<" it is anagram";
    }else{
        cout<<" it is not anagram";
    }
    return 0;
}














