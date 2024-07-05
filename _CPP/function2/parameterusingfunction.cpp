/*Pass by value*/

/*#include<iostream>
using namespace std;

void swap(int a,int b);

int main(){
    int a,b;
    cout<<"The value of a is:- ";
    cin>>a;
    cout<<endl;
    cout<<"The value of b is:- ";
    cin>>b;
    swap(a,b);
    return 0;
}

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The value of a is:- "<<a<<endl;
    cout<<"The value of b is:- "<<b<<endl;
}*/

/*Pass by address*/

/*#include<iostream>
using namespace std;

void swap(int *a,int *b);
int main(){
    int a,b;
    cout<<"Enter the first number :- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    swap(&a,&b);
    cout<<"After swapping the number is:- ";
    cout<<"The value of a is:- "<<a<<endl;
    cout<<"The value of b is:- "<<b<<endl;
    return 0;
}


void swap(int *a,int *b){
     int c;
     c=*a;
     *a=*b;
     *b=c;
}*/

/*Pass By reference*/


#include<iostream>
using namespace std;

void swap(int &a,int &b);

int main(){
    int a;
    int b;
    cout<<"The value of a is:- ";
    cin>>a;
    cout<<endl;
    cout<<"The value of b is:- ";
    cin>>b;
    swap(a,b);
    cout<<"The value of a is:- "<<a<<endl;
    cout<<"The value of b is:- "<<b<<endl;
}

void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
};