#include<iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter the five number in the array:- ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"The number that you have entered in the array doing it in ascending order:- /n";
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(a[i]>a[j]){
              int c;
              c=a[i];
              a[i]=a[j];
              a[j]=c;
            }
        }
    }
    cout<<"The number in the ascending order is:- ";
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
  return 0;

}