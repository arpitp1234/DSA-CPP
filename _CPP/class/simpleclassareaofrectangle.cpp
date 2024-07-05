#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(int a,int b){
        length=a;
        breadth=b;
    }
    void display(){
        cout<<"The area of rectangle is:- "<<length*breadth;
    }
};

int main(){
    rectangle r1(4,5);
    r1.display();
    return 0;
}









