/*Here we are going to do overwriting of string*/

#include<iostream>
using namespace std;

int main(){
    int i;
    char str1[30],str2[30];
    cout<<"Enter the string 1:-";
    gets(str1);
    cout<<"Enter the string 2:- ";
    gets(str2);
    for( i=0;str1[i] !='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}