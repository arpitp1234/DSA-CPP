/*Cpp has introduced new type of variable know as reference variable.It is altrenative name for previously define variable*/

#include<iostream>
using namespace std;

class area_of_circle{
    private:
    int r;
    public:
    void area(int a){
        r=a;
    }
    void display(){
        cout<<"The area of the circle is:- "<<3.14*r*r;
    }
};

int main(){
    area_of_circle r1;
    r1.area(5);
    r1.display();
    return 0;
}



