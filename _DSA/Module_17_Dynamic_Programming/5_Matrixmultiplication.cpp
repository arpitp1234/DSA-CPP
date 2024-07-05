/*If you have chaing of matrix for multiplication then first find out whcih multiplication is to performed,then total effort for 
multiplication is to be perfomed,then total effort for multiplying them should be minimum .This is matrix chain mulitplication.

Dynamic programming say you should use all parenthesis and pickup the best one.
*/

#include<iostream>
#include<limits.h>
using namespace std;

int mc[4][4];
int Matrixmultiply(int p[5],int i,int j){
    if(i==j){
        return 0;
    }
    if(mc[i][j] !=-1){
        return mc[i][j];
    }
    mc[i][j]=INT_MAX;
    for(int k=i;k<j;k++){
        mc[i][j]=min(mc[i][j],Matrixmultiply(p,i,k)+Matrixmultiply(p,k+1,j)+p[i-1]*p[k]*p[j]);
    }
    return mc[i][j];
}

int main(){
    int p[]={1,2,3,4,3};
    int size=sizeof(p)/sizeof(p[0]);
    int i=1;
    int j=size-1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            mc[i][j]=-1;
        }
    }
    int k=Matrixmultiply(p,i,j);
    cout<<"Matrix multiplication is:- "<<k;
    return 0;
}