/*Here we are going to talk about virtual function*/


#include<iostream>
using namespace std;

class student{
     protected:
    int roll_no;
    public:
    void set_rollno(int a){
       roll_no=a;
    }
    void get_rollno(){
        cout<<"The roll no is :- "<<roll_no<<endl;
    }
};

class academic:virtual public student{
     protected:
    int maths;
    int physics;
    public:
    void set_marks(int a,int b){
        maths=a;
        physics=b;
    }
    void get_marks(){
        cout<<"The marks in math is :- "<<maths;
        cout<<"The marks is physic is:- "<<physics;
    }
};

class sports:virtual public student{
     protected:
    int sports_score;
    public:
    void set_score(int a){
       sports_score=a;
    }
    void get_score(){
        cout<<"The score is:- "<<sports_score<<endl;
    }
};

class result:public academic,public sports{
    protected:
    int result;
    public:
    void set_result(){
        result=maths+physics+sports_score;
    }
    void get_result(){
        get_rollno();
        get_marks();
        get_score();
        cout<<"The result of the student is:- "<<result<<endl;
    }
};

int main(){
    result r1;
    r1.set_rollno(1);
    r1.set_marks(10,15);
    r1.set_score(34);
    r1.set_result();
    r1.get_result();
    return 0;
}


    
