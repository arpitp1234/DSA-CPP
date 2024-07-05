/*Sprintf stand for "string print".In c programming language it is file handling function that is used to send formatter ouput to the string.Instead of printing on console
sprintf() function store the ouput on char buffere that is specified in sprintf*/

#include<stdio.h>
int main(){
    char buffer[30];
    int a=15;
    int b=24;
    int res=a+b;
    sprintf(buffer,"The sum of %d and %d is %d",a,b,res);
    printf("%s",buffer);
    return 0;
}























