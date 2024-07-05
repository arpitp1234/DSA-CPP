/*Multilevelinheritance*/
/*Here we are going to talk about the multilevelinheritance*/

#include<iostream>
using namespace std;

class Student{
    protected:
    int rollno;
    public:
    void set_rollno(int a){
        rollno=a;
    }
    void get_rollno(){
        cout<<"The roll_no is:- "<<rollno;
    }
};

class marks:public Student{
    protected:
    int english;
    int maths;
    public:
    void set_marks(int a,int b){
        english=a;
        maths=b;
    }
    void get_marks(){
        cout<<endl<<"Marks "<<endl<<"English:- "<<english<<endl<<"Maths:- "<<maths<<endl;
    }
};

class result:public marks{
    protected:
    int percent;
    public:
    void results(){
      get_rollno();
      get_marks();
      cout<<"The percentage obtained is:- "<<(english+maths)/2;
    }
};

int main(){
    result r1;
    r1.set_rollno(5);
    r1.set_marks(97,87);
    r1.results();
    return 0;
}