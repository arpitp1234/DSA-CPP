#include<iostream>
using namespace std;

int main(){
    char a[30];
    int word=0;
    cout<<"Enter the statement:- ";
    gets(a);
    for(int i=0; a[i] != '\0';i++){
         if(a[i]==' '){
           word++;
         }
    }
    cout<<"The word in entered statement is :- "<<word+1;
    return 0;
}