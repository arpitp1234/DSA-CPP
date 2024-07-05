#include<iostream>
using namespace std;

class Circle{
    private:
    int r;
    public:
    Circle(int a){
        r=a;
    }
    void area(){
        cout<<3.14*r*r<<endl;
    }
};

int main(){
    Circle c1(4);
    c1.area();
    return 0;
}
















