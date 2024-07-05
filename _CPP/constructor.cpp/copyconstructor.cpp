/*Copy constructor creates an object and intialise with value of object of same class */

#include<iostream>
using namespace std;

class number{
    private:
    int num;
    public:
    number(){}
    number(int x){
        num=x;
    }
    number(number &obj){
        num=obj.num;
    }
    void display(){
        cout<<"The value of the number is:- "<<num<<endl;
    }
};


int main(){
    number n1(4);
    n1.display();
    number n2(n1);
    n2.display();
    number n3(n2);
    n3.display();
    return 0;  
}