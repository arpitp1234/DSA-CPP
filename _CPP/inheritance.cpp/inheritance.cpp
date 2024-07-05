/*The mechanism of derving the new class from the old one is called as inheritance*/

#include<iostream>
using namespace std;

class Employee{
    protected:
    int id;
    int salary;
    public:
    Employee(){}
    Employee(int a,int b){
        id=a;
        salary=b;
    }
    void display(){
        cout<<"The id is "<<id<<"  and the salary is:-  "<<salary<<endl;
    }
};

class Programmer:public Employee{
    private:
    int skilllevel=9;
    public:
    Programmer(int a){
        id=a;
    }
};

int main(){
    Employee e1(90,10000),e2(150,200000);
    e1.display();
    e2.display();
    Programmer p1(23);
    p1.display();
    return 0;
}