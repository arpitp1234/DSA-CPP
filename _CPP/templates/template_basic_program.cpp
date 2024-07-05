/*Templates are used to define family of classes and function*/

/*Write a class without template*/

/*
#include<iostream>
using namespace std;

class Arithmetic{
    private:
    int  a;
    int  b;
    public:
    Arithmetic(int x ,int y){
        a=x;
        b=y;
    }
    int add(){
        int c;
        c=a+b;
        return c;
    }
    int sub(){
        int c;
        c=a-b;
        return c;
    }
};

int main(){
    Arithmetic A1(6,5);
    cout<<A1.add()<<endl;
    cout<<A1.sub()<<endl;
    return 0;
}
*/

/*Writing above with template*/

#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
    private:
    T a;
    T b;
    public:
    Arithmetic(T x,T y){
        a=x;
        b=y;
    }
    T add();
    T sub();
};

template<class T>
T Arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithmetic<T>::sub(){
    T c;
    c=a-b;
    return c;
}

int main(){
    Arithmetic<int> A1(6,5);
    cout<<A1.add()<<endl;
    cout<<A1.sub()<<endl;
    return 0;
}