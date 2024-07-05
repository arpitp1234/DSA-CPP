/*Here we are going to talk about ambiguity resolution in single
level inheritace*/

#include<iostream>
using namespace std;

class Base1{
    private:
    int a;
    public:
    void Display(){
        cout<<"This is a base class"<<endl;
    }
};

class Derived1:public Base1{
    private:
    int b;
    public:
    void Display(){
        cout<<"This is Derived class"<<endl;
    }
};

int main(){
    Derived1 d1;
    d1.Display();
    d1.Base1::Display();
    return 0;
}