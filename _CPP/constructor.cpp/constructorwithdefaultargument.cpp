#include<iostream>
using namespace std;

class data{
    private:
    int a;
    int b;
    public:
    data(int x,int y=9){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The value of a is "<<a<<" and "<<b<<endl;
    }
};

int main(){
   data d1(10,20);
   d1.display();
   data d2(10);
   d2.display();
   return 0;
}