/*Here we are going to talk about the mulitple inheritance*/

#include<iostream>
using namespace std;

class Base1{
    protected:
    int value1;
    public:
    void set1(int a){
        value1=a;
    }
};

class Base2{
    protected:
    int value2;
    public:
    void set2(int b){
        value2=b;
    }
};

class Base3{
    protected:
    int value3;
    public:
    void set3(int c){
        value3=c;
    }
};

class Derived:public Base1,public Base2,public Base3{
    public:
    void show_value(){
        cout<<"The value 1 is:- "<<value1<<endl;
        cout<<"The value 2 is:- "<<value2<<endl;
        cout<<"The value 3 is:- "<<value3<<endl;
    }
};

int main(){
    Derived d1;
    d1.set1(5);
    d1.set2(6);
    d1.set3(7);
    d1.show_value();
    return 0;
}







