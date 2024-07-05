/*Swapping of number using friend function*/

#include<iostream>
using namespace std;

class Y;
class X{
    private:
    int a;
    public:
    void init(int value){
       a=value;
    }
    void display(){
        cout<<"The value of a is:- "<<a<<endl;
    }
    friend void swap(X &obj1,Y &obj2);
};

class Y{
    private:
    int b;
    public:
    void init(int value){
        b=value;
    }
    void display(){
        cout<<"The value of b is:- "<<b<<endl;
    }
    friend void swap(X &obj1,Y &obj2);
};

void swap(X &obj1,Y &obj2){
    int temp;
    temp=obj1.a;
    obj1.a=obj2.b;
    obj2.b=temp;
}

int main(){
    X obj1;
    obj1.init(5);
    obj1.display();
    Y obj2;
    obj2.init(7);
    obj2.display();
    swap(obj1,obj2);
    obj1.display();
    obj2.display();
    return 0;
}

