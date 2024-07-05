#include<iostream>
using namespace std;

struct student{
    char name[20];
    int marks_chemistry;
    int marks_physics;
    int marks_maths;
};

int main(){
    student s1={"arpit",12,13,15};
    cout<<"Name of student:- "<<s1.name<<endl;
    cout<<"marks_chemistry:- "<<s1.marks_chemistry<<endl;
    cout<<"marks_physics :- "<<s1.marks_physics<<endl;
    cout<<"marks_math:- "<<s1.marks_maths<<endl;
    return 0;
}