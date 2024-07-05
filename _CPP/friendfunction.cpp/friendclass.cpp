/*Here we are talking about the friend class*/

#include<iostream>
using namespace std;

class complex;
class calculator{
   public:
   int sumrealcomplex(complex obj1,complex obj2);
   int sumimaginarycomplex(complex obj1,complex obj2);
};
class  complex{
    private:
    int real;
    int imaginary;
    friend class calculator;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void display(){
        cout<<"The complex number is:- "<<real<<"+ i"<<imaginary;
    }
};

int calculator::sumrealcomplex(complex obj1,complex obj2){
    return (obj1.real+obj2.real);
}

int calculator::sumimaginarycomplex(complex obj1,complex obj2){
    return (obj1.imaginary+obj2.imaginary);
}


int main(){
   complex a1;
   a1.setdata(10,20);
   a1.display();
   complex a2;
   a2.setdata(20,30);
   a2.display();
   calculator r1;
   int a=r1.sumrealcomplex(a1,a2);
   int b=r1.sumimaginarycomplex(a1,a2);
   cout<<"The sum of real number is"<<a<<" "<<endl;
   cout<<"The sum of the complex number is"<<b<<" "<<endl;
   return 0;
}

