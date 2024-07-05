#include<iostream>
using namespace std;


class complex{
    private:
    int a;
    int b;
    public:
    complex(int x,int y){     //constructor which has a parameter is called as parameterized constructor
        a=x;   
        b=y;
    }
    void display(){
        cout<<"The complex number is:- "<<a<<"+ "<<b<<"i";
    }

};

int main(){
    complex a(10,20);
    a.display();
    return 0;
}