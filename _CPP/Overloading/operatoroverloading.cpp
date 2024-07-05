/*Here we are going to talk about operator overloading*/

#include<iostream>
using namespace std;

class abc{
    private:
    int a;
    int b;
    public:
    abc(){
        a=0;
        b=0;
    }
    abc(int x,int y){
        a=x;
        b=y;
    }
    abc operator*(abc obj){
        abc temp;
        temp.a=a*obj.a;
        temp.b=b*obj.b;
        return temp;
    }
    void Display(){
        cout<<"The value of a is:- "<<a<<endl<<"The value of b is:- "<<b<<endl;
    }
};

int main(){
    abc r1(2,3);
    r1.Display();
    abc r2(3,4);
    r2.Display();
    abc r3;
    r3=r1*r2;
    r3.Display();
    return 0;
}








