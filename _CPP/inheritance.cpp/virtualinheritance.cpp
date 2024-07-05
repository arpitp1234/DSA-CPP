/*Here we are going to talk about virtual inheritance*/

#include<iostream>
using namespace std;


class Student{
    protected:
    int roll_no;
    public:
    void set_rollno(int a){
        roll_no=a;
    }
    void get_rollno(){
        cout<<"The roll no is:- "<<roll_no;
    }
};

class academic:virtual public Student{
    protected:
    int maths;
    int physics;
    public:
    void set_marks(int a,int b){
      maths=a;
      physics=b;
    }
    void get_marks(){
        cout<<"The marks in maths is :- "<<maths<<endl;
        cout<<"The marks in physic is:- "<<physics<<endl;
    }
};

class sports:virtual public Student{
    protected:
    int score;
    public:
    void set_score(int a){
        score=a;
    }
    void get_score(){
        cout<<"The score is:- "<<score<<endl;
    }
};

class results:public academic,public sports{
    protected:
    int results;
    public:
    void set_results(){
      results=maths+physics+score;
    }
    void get_results(){
          get_marks();
          get_score();
          cout<<"The result is:- "<<results;
    }
};

int main(){
    results r1;
    r1.set_rollno(1);
    r1.set_marks(10,15);
    r1.set_score(15);
    r1.set_results();
    r1.get_results();
    return 0;
}




