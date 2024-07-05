#include<stdio.h>
#include<conio.h>
void main(){
    char name[20];
    printf("Enter your name");
    scanf("%c",&name);
    printf("hello");
    printf("%c",name);
    gets(name);
    puts("hello");
    puts(name);
    getch();
}