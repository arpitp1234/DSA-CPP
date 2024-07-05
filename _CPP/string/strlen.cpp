#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char statement[100]="Today we are going to do something great which people have not imagined";
    int len;
    len=strlen(statement);
    cout<<"The length of the string is:- "<<len;
    return 0;
}