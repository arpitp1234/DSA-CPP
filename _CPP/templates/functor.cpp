/*What is function object*/
/*
A  function object is a function wrapped in a class so that is it is available as object.That is we can use function as a object
*/
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
   //Function object(functor):: A function wrapped in a class so it is availabel like an object
   int arr[]={1,63,4,3,54,2};
   sort(arr,arr+5);
   sort(arr,arr+6,greater<int>());
    /*greater function descending will sort is descending order*/
   for(int i =0;i<6;i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}











