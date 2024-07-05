/*Here we are creating array of object*/

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    public:
    void getdata(){
        cout<<"Enter name:- ";
        cin>>name;
        cout<<endl;
        cout<<"Enter age:- ";
        cin>>age;
        cout<<endl;
    }
    void putdata(){
         cout<<"name:- "<<name;
         cout<<"age:- "<<age;
    }

};

int main(){
   Student s[3];
   for(int i=0;i<3;i++){
     cout<<"Student "<<i+1<<endl;
      s[i].getdata();
   }
   cout<<endl;
   for(int i=0;i<3;i++){
    cout<<"Student "<<i+1<<endl;
    s[i].putdata();
   }
   cout<<endl;
   return 0;
}