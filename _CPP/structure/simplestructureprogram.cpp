#include<iostream>
#include<conio.h>

using namespace std;

struct student{
    int age;
    int rollno;
}s1,s2;

int main(){
    cout<<"For student 1:- \n";
    cout<<"Enter the age of student 1 :- ";
    cin>>s1.age;
    cout<<"Enter the rollno of student 1 :- ";
    cin>>s1.rollno;

    cout<<"For student 2:- \n";
    cout<<"Enter the age of student 2 :- ";
    cin>>s2.age;
    cout<<"Enter the roll_no of student_2 :-";
    cin>>s2.rollno;
    

    cout<<"Input detail :- \n";
    cout<<"For student 1:- ";
    cout<<"student 1 :- "<<s1.age<<endl;
    cout<<"student 1 :- "<<s1.rollno<<endl;

    cout<<"For student 2:- \n";
    cout<<"student 1 :-"<<s2.age<<endl;
    cout<<"student 2 :-"<<s2.rollno<<endl;
    return 0;
}
