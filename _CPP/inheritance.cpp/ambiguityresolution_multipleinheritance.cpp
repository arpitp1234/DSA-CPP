/*Ambiguity resolution in cpp:- When we make a derive class from two or base class,then it sometimes it may happen the same name function is present in both the base class and when
same function has to be called.To solve the amibguity we use the scope resolution operator.*/


#include<iostream>
using namespace std;

class Base1{
    private:
    int a;
    public:
    void greet(){
        cout<<"Hello";
    }
};
class Base2{
    private:
    int b;
    public:
    void greet(){
        cout<<"Hello World";
    }
};

class Derived:public Base1,public Base2{
    private:
    int c;
    public:
    void greet(){
        Base1::greet();
    }
};

int main(){
    Derived d1;
    d1.greet();
    return 0;
}
