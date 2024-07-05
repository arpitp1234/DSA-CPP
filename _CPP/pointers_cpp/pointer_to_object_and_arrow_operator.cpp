/*Here we are going to talk about the arrow operator and pointer to the objects*/

#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imaginary;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void getdata(void){
        cout<<"The real part is:- "<<real<<endl;
        cout<<"The imaginary part is:-"<<imaginary<<endl;
    }
};

int main(){

    complex *ptr =new complex;

    (*ptr).setdata(10,20);
    (*ptr).getdata();

    complex *ptr1 =new complex;
    ptr1->setdata(23,30);
    ptr1->getdata();
    return 0;
}









