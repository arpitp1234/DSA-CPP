/*Inline function are those which are invoked inline when called*/
/*Inline function send request to compiler not command*/

#include<iostream>
using namespace std;

void inline square(int a){
    cout<<"The area of the square is:- "<<a*a;
}

int main(){
    int side;
    cout<<"Enter the value of side"<<endl;
    cin>>side;
    square(side);
    return 0;
}


