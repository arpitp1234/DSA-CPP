/*This conversion is done by the compiler*/
/*This conversion is done by the compiler*/

/*When more than one data type of variable are used on an expression then compiler convert data type to avoid loss of data*/

/*Example*/

#include<stdio.h>
int main(){
    int a=10;
    int b='s';
    float c=2.83;
    a=a+b;
    printf("Implicit conversion from character to integer: %d\n",a);
    c=c+a;
    printf("Implicit conversion from integer to float:- %f \n",c);
    return 0;
}








