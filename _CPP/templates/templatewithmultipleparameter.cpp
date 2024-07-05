/*
Class template with multiple parameter

template<class T1,class T2......>
clas nameofclass{
    //body
}

*/
#include<iostream>
using namespace std;

template<class T1,class T2>
class Data{
    private:
    T1 data1;
    T2 data2;
    public:
    Data(T1 x,T2 y){
        data1=x;
        data2=y;
    }
    void display(){
        cout<<"data 1 is:- "<<data1<<endl;
        cout<<"data 2 is:- "<<data2<<endl;
    }
};
int main(){
    Data<int,float> D1(5,4.5);
    D1.display();
    Data<int,float> D2(9,2);
    D2.display();
    return 0;
}


















