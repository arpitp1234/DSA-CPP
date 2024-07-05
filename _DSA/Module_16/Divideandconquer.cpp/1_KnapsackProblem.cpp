/*
Knapsack Problem

=>Knapsack problem is one of the most important problem in greedy alogrithm;

=>Knapsack ka matlab ek bag aur us bag me kuch na kuch capacity diya jaata ho.

Time Complexity=>O(n)+o(nlogn)+o(n);

*/

/*Program*/

#include<iostream>
using namespace std;

int main(){
    float temp1,temp2;
    float M=20;
    float P[3]={25,24,15};
    float W[3]={18,15,10};
    float R[3];
    for(int i=0;i<3;i++){
        R[i]=P[i]/W[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(R[i]<R[i+1]){
                temp2=P[j];
                P[j]=P[i];
                P[i]=temp2;

                temp1=W[j];
                W[j]=W[i];
                W[i]=temp1;
            }
        }
    }
    static int p=0;
    for(int i=0;i<3;i++){
        if(M>0 && W[i]<=M){
            M=M-W[i];
            p=p+P[i];
        }else{
            break;
        }
    if(M>0){
        p=p+P[i]*(M/W[i]);
    }
    }
    cout<<p;
    return 0;
}