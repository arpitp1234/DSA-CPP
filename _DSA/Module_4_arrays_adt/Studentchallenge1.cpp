/*1.Finding the missing element in the array*/
#include<iostream>
using namespace std;

int main(){
    int series[10]={1,2,3,4,6,7,8,9,10};
    int sum=0;
    int n=10;
    for(int i=0;i<10;i++){
        sum=sum+series[i];
    }
    int sumformula=(n*(n-1))/2;
    int missingelement=sumformula-sum;
    cout<<"The missingelemnt in cpp:- "<<missingelement;
    return 0;
}

















































































