/*Here we are going to intialise different constructor*/

#include<iostream>
using namespace std;

class alpha{
    private:
    int a;
    public:
    alpha(int x){
        a=x;
        cout<<"First constructor created"<<endl;
    }
    void show_alpha(){
        cout<<"i = "<<a<<endl;
    }
};

class beta{
    private:
    int b;
    public:
    beta(int y):b(y){
      cout<<"Second constructor created"<<endl;
    }
    void show_beta(){
        cout<<"b = "<<b<<endl;
    }
};

class gamma:public alpha,public beta{
    private:
    int c;
    int d;
    public:
    gamma(int x,int y,int z):alpha(x*x),beta(y*y*y),c(x){
        d=y;
        cout<<"Third construtor created"<<endl;
    }
    void show_gamma(){
       show_alpha();
       show_beta();
       cout<<"c = "<<c<<endl<<"d = "<<d<<endl;
    }
};

int main(){
    gamma g1(1,2,3);
    g1.show_gamma();
    return 0;
}