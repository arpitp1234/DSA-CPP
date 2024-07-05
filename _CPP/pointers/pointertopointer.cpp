#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int var=300;
    int *ptr;
    int **pptr;
    ptr=&var;
    pptr=&ptr;
    printf("the value is %d \n",*ptr);
    printf("the value is %d \n",**pptr);
    printf("the address is %d \n",pptr);
    printf("the address is %d \n",ptr);
    printf("the value is %d \n",*(&ptr));
    printf("the value is %d",*(&var));
    return 0;
}
