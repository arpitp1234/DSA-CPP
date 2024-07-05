#include<iostream>
using namespace std;

int display(char *name,int rollno);

struct student{
    char name[20];
    int rollno;
};

int main(){
    student s1;
    cout<<"Enter the name:- ";
    gets(s1.name);
    cout<<"Enter the roll_no:- ";
    cin>>s1.rollno;
    display(s1.name,s1.rollno);
    return 0;
}

int display(char *name,int rollno){
    printf("name:");
    puts(name);
    printf("\n");
    printf("rollno=%d",rollno);
}






