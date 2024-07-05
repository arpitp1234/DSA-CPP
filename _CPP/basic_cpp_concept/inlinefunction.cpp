/*Inline function are those function which will expanded inline when invoked*/
/*Inline function occur only for small function*/
/*These compiler send request to the compiler not command*/


//Using inline function in product of two number;
/*#include<iostream>
using namespace std;

int inline product(int a,int b){
    return a*b;
}

int main(){
    int a=10;
    int b=10;
    cout<<"The product of two number is"<<product(10,10)<<endl;
    return 0;
}*/

//Using inline function  in sum of two product

#include<iostream>
using namespace std;

int inline sum(int a,int b){
    return a+b;
}
int main(){
    int a=10;
    int b=10;
    cout<<"The sum of two number is:- "<<sum(a,b)<<endl;
    return 0;
}










