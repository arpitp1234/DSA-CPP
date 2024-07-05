#include<iostream>
using namespace std;


int main(){
    string s="ajKLz";
    cout<<"The string is:- "<<endl;
    for(int i=0;s[i] != '\0';i++){
        cout<<s[i];
    }
    for(int i=0;s[i] != '\0';i++){
        if(s[i]>=97 && s[i]<=122){
          s[i]=s[i]-32;

        } 
    }
    cout<<endl;
    cout<<"The word in a capital letter is:- "<<endl;
    for(int i=0;s[i] != '\0';i++){
        cout<<s[i];
    }
  return 0;
}