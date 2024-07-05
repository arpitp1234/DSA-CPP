#include<iostream>
using namespace std;

class Base{
    public:
    int Data1;
    void Display(){
        cout<<"The Data is :- "<<Data1<<endl;
    }
};

class Derived:public Base{
    public:
    int Data2;
    void Display(){
        cout<<"The Data1 is:- "<<Data1<<endl;
        cout<<"The Data2 is:- "<<Data2<<endl;
    }
};

int main(){
    Base *base_class_pointer;
    Base obj1;
    Derived obj2;
    base_class_pointer=&obj2;
    base_class_pointer->Data1=100;
    base_class_pointer->Display();

    Derived *derived_class_pointer;
    derived_class_pointer=&obj2;
    derived_class_pointer->Data2=200;
    derived_class_pointer->Display();
    return 0;
}


