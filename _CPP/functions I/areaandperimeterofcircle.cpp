#include<iostream>
using namespace std;


void areaperi(float r){
    float area,perimeter;
    area=3.14*r*r;
    cout<<"The area of the circle:- "<<area<<endl;
    perimeter=2*3.14*r;
    cout<<"The perimeter of the circle:- "<<perimeter<<endl;
}

int main(){
    float r;
    cout<<"Enter the radius";
    cin>>r;
    areaperi(r);
    return 0;
}