#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first side of triangle is:- ";
    cin>>a;
    cout<<"Enter the second side of triangle is:- ";
    cin>>b;
    cout<<"Enter the third side of triangle is:- ";
    cin>>c;
    if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==b*b+a*a){
        cout<<"Since it is following pythgoras theorem so it is right angle triangle";

    }else{
        cout<<"It is not right angle triangle";
    }
    return 0;
}