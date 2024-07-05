#include<iostream>
using namespace std;

int pallindrome(string s,int len){
   for(int i=0;i<len/2;i++){
        if(s[i] != s[len-i-1]){
         return 1;
        }
   }
   return 0;
}


int main(){
   string s="level";
   int len=0;
   for(int i=0;s[i] != '\0';i++){
        len++;
   }
   cout<<"The length of the string is:- "<<len<<endl;
   int k;
   k=pallindrome(s,len);
   if(k==1){
      cout<<"The string is not a pallindrome"<<endl;
   }else if(k==0){
      cout<<"The string is a pallindrome"<<endl;
   }
   return 0;
}