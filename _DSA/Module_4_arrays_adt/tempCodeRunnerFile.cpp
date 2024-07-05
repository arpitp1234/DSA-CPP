#include<iostream>
using namespace std;

int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int min=A[0];
    int max=A[0];
    for(int i=1;i<10;i++){
        if(A[i]<min){
            min=A[i];
        }else if(A[i]>max){
            max=A[i];
        }
    }
    return 0;
}