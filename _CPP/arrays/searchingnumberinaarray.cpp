#include<iostream>
using namespace std;


int main(){
    int arr[5];
    int location;
    int d;
    cout<<"Enter the five number in the array:- ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number that you want to search:- ";
    cin>>d;
    for(int i=0;i<5;i++){
        if(arr[i]==d){
            location=i+1;  
            break; 
        }
  
    }
    cout<<"The location of element is position "<<location<<" from the starting";
    return 0;
}