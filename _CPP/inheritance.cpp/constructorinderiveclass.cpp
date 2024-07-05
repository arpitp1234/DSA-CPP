/*Here we are going to write simple program to write constructor in derived class*/
/*case1:
class B:public A{}
  //Order of execution of constructor first->first A() then B()
*/
/*
case2:
class A:public B,public C{}
  //Order of execution of constructor first->B() then C() and A()
case3:
class A:public B,virtual public C{}
//order of execution of construcotr first->C() the B() and A()

*/
#include<iostream>
using namespace std;

class X{
    protected:
    int x;
    public:
    X(int a){
        x=a;
    }
    void display_X(){
        cout<<"The value of x is:- "<<x<<endl;
    }

};

class Y{
    protected:
    int y;
    public:
    Y(int b){
        y=b;
    }
    void display_Y(){
        cout<<"The vlaue of y is:- "<<y<<endl;
    }
    
};

class Z:public X,public Y{
    protected:
    int z;
    public:
    Z(int a,int b):X(a),Y(b){
        z=a+b;
        cout<<"Third constructor created";

    }
    void display_Z(){
        cout<<"The value of z is:-"<<z<<endl;
    }
};

int main(){
    Z a1(1,2);
    a1.display_X();
    a1.display_Y();
    a1.display_Z();

   return 0;   
}