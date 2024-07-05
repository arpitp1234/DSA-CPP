#include<iostream>
using namespace std;

int main(){
    char str[40];
    char *p;
    int i=0;
    p=str;
    cout<<"Enter the string:- ";
    gets(str);
    while(*p != '\0'){
        *p++;
        i++;
      
    }
    cout<<"The length of the string is:- "<<i;
    return 0;
}







