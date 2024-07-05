/*Here we are going to do operator overloading of -ve sign*/

#include<iostream>
using namespace std;

class xyz{
    private:
    int a;
    int b;
    public:
    xyz(int x,int y){
        a=x;
        b=y;
    }
    void operator-(){
        a=a+10;
        b=b+10;
    }
    void display(){
        cout<<"The value of a is:- "<<a<<endl<<"and the value of b is:- "<<b<<endl;
    }
};
int main(){
    xyz a1(10,20);
    -a1;
    a1.display();
    return 0;
}











