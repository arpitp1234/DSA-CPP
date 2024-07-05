
#include<iostream>
using namespace std;

class rectangle{
    private:
    int x;
    int y;
    public:
    rectangle(){ //The constructor which do not have a parameter is called as constructor.
        x=0;
        y=0;
    }
    void display(){
        cout<<"The value of x is:- "<<x<<endl;
        cout<<"The value of y is:- "<<y<<endl;
    }
};

int main(){
    rectangle r;
    r.display();
    return 0;
}


