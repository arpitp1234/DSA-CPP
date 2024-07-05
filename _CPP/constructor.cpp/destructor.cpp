/*Destructor is a member function of a class same as constructor that destroys the object when they go out of scope or when the program ends*/

#include<iostream>
using namespace std;

class number{
    private:
    int num;
    public:
    number(int n){
      num=n;
      cout<<"Object Created:- "<<num<<endl;
    }
    ~number(){
        cout<<"Objext Destroyed:- "<<num<<endl;
    }
};

int main(){
    number n1(1);
    {
        number n2(2);
        number n3(3);
    }
    return 0;
}



