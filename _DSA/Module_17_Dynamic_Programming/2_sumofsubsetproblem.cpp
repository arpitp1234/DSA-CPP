#include<iostream>
using namespace std;

int S[5]={1,2,3,4,5};
int table[50][50]={-1};

int sos(int n,int m){
    if(m==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(n<0){
        return 0;
    }
    if(table[n-1][m]!=-1){
        return table[n-1][m];
    }
    if(S[n-1]>m){
        return table[n-1][m]=sos((n-1),m);
    }else{
        return table[n-1][m]=sos((n-1),m) || sos((n-1),(m-S[n-1]));
    }
}
int main(){
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            table[i][j]=-1;
        }
    }
    int k=sos(5,50);
    if(k==0){
        cout<<"false";
    }else{
        cout<<"true";
    }
    return 0;
}
