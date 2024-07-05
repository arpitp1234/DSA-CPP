/*Here we are going to use new and delete keyword ,new keyword is used for dynamic allocation of memory and delete keyword is used to delete
the memory that is dynamically allocated*/

#include<iostream>
using namespace std;

int main(){
    int *a=new int(40);
    cout<<"The value of a is:- "<<*a<<endl;
    int *arr=new int[40];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}











