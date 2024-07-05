/*Here we are going to find sum complex number using friend function*/

#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imaginary;
    friend complex sum(complex obj1,complex obj2);
    public:
    void init(int a,int b){
       real=a;
       imaginary=b;
    }
    void display(){
        cout<<"The complex number is:- "<<real<<"+ i"<<imaginary;
    }
};

complex sum(complex obj1,complex obj2){
    complex obj3;
    obj3.init(obj1.real+obj2.real,obj1.imaginary+obj2.imaginary);
    return obj3;
}

int main(){
    complex a;
    a.init(10,20);
    complex b;
    b.init(20,30);
    complex c;
    c=sum(a,b);
    c.display();
    return 0;
}
