#include<iostream>
using namespace std;

int swap(int *a,int *b);

int main(){
    int y,z;
    cout<<"Enter the first number=> y= ";
    cin>>y;
    cout<<"Enter the second number=> z= ";
    cin>>z;
    swap(&y,&z);
    return 0;
}

int swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"the number after swapping is \n";
    cout<<*a<<endl;
    cout<<*b;
}