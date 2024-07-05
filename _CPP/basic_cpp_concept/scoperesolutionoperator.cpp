#include<iostream>
using namespace std;

int x=45;
int main(){
    int x=34;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of x is "<<::x<<endl;
    return 0;
}