
#include<iostream>
using namespace std;

class complex{
    private:
    int a;
    int b;
    public:
    complex(){}
    complex(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The complex number is:- "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex a;
    int x,y;
    cout<<"Enter the value of x:- ";
    cin>>x;
    cout<<"Enter the value of y:- ";
    cin>>y;
    a=complex(x,y);
    a.display();
    return 0;
}






