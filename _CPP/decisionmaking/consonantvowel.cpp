#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character:- ";
    cin>>ch;
     int islowercase=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' );
     int isuppercase=( ch=='A' || ch=='E' || ch=='I'  || ch=='O'  || ch=='U');
     if(islowercase || isuppercase){
        cout<<"the char that you have input is vowel";
     }
    else{
       cout<<"The character the you have input is consonant";
    }
    return 0;
}