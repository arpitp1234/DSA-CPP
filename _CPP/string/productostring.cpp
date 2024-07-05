/*We are going to multiply numbe in the array*/

#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int product=1;
    for(int i=0;i<5;i++){
        product=product*a[i];
    }
    cout<<"The sum of product in the array is:- "<<product;
    return 0;
}