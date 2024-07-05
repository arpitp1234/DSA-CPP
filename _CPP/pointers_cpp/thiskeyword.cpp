/*Here we are going to use the this keyword in cpp*/

/*
#include<iostream>
using namespace std;

class X{
    private:
    int a;
    public:
    void setdata(int a){
        this->a=a;
    }
    void getdata(){
        cout<<"The value of a is:- "<<a;
    }
};
int main(){
    X s;
    s.setdata(5);
    s.getdata();
    return 0;
}
*/



/*Using the this keyword we can return the object that 
we are creating while calling the member function*/


#include<iostream>
using namespace std;

class Y{
    private:
    int data;
    public:
    Y & setdata(int data){
        this->data=data;
        return *this;
    }
    void getdata(){
        cout<<"The value of the data is:- "<<data<<endl;
    }
};

int main(){
    Y u;
    u.setdata(5);
    Y z;
    z=u;
    z.getdata();
    return 0;
}









