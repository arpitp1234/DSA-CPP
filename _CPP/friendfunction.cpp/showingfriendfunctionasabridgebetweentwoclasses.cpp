#include<iostream>
using namespace std;

class Y;
class X{
    private:
    int a;
    public:
    friend int sum(X obj1,Y obj2);
    void init(int value){
        a=value;
    }
};

class Y{
    private:
    int b;
    public:
    friend int sum(X obj1,Y obj2);
    void init(int value){
        b=value;
    }
};

int sum(X obj1,Y obj2){
    int c;
    c=obj1.a+obj2.b;
    return c;
}

int main(){
    X a1;
    a1.init(5);
    Y a2;
    a2.init(6);
    int k=sum(a1,a2);
    cout<<k;
    return 0;
}