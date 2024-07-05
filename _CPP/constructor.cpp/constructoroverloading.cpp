/*When there is more than one constructor in a class then it is known as constructor overloading*/


#include<iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void display(){
        cout<<"The complex number is:- "<<a<<"+ i"<<b<<endl;
    }
};

int main(){
    complex c1(10,20);
    c1.display();
    complex c2(10);
    c2.display();
    return 0;
}


















