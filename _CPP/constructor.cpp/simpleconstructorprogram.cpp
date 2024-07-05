#include<iostream>
using namespace std;


class complex{
    private:
    int a;
    int b;
    public:
    complex(){  //It is known as default constructor
        a=10;
        b=20;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The complex number is:- "<<a<<" + i"<<b<<endl;
    }
};

int main(){
    complex a;
    a.display();
    complex b(10,30);
    b.display();
return 0;
}