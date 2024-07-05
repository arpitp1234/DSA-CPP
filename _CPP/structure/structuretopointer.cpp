#include<iostream>
using namespace std;

struct Student{
    char name[20];
    int age;

};
int main(){
    struct Student s1={"arpit",20};
    struct Student *ptr;
    ptr=&s1;
    cout<<ptr->name<<" ";
    cout<<ptr->age<<" ";
    return 0;
}
















