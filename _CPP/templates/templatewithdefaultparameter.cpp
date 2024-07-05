/*Here we are going to disucss template with default parameter*/

#include<iostream>
using namespace std;

template<class T1=float,class T2=int>
class myclass{
   private:
   T1 a;
   T2 b;
   public:
   myclass(T1 x,T2 y){
       a=x;
       b=y;
   }
   void display(){
      cout<<"data 1 is :- "<<a<<endl;
      cout<<"data 2 is:- "<<b<<endl;
   }
};

int main(){
    myclass<> T1(12.0,13);
    T1.display();
    myclass<float,float> T2(12.0,13.0);
    T2.display();
    return 0;
}































