/*In this program we are going to pass object as function argument*/

#include<iostream>
using namespace std;

class Complex{
    private:
    int x;
    int y;
    public:
    void init(int a,int b){
        x=a;
        y=b;
    };
    void add_complexs(Complex c1,Complex c2){
        x=c1.x+c2.x;
        y=c1.y+c2.y;
    }  
    void display(){
        cout<<"The complex number is:- "<<x<<" + i"<<y<<endl;
    }  
};

int main(){
    Complex c1,c2,c3;
    c1.init(2,3);
    c2.init(4,5);
    c3.add_complexs(c1,c2);
    c3.display();
    return 0;
}