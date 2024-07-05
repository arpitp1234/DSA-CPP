#include<iostream>
using namespace std;

int LCS(char *A,char *B,int i,int j,int dp[10][10]){
    if(A[i]=='\0' || B[j]=='\0'){
        return 0;
    }
    if(A[i]==B[j]){
        return dp[i][j]=LCS(A,B,i+1,j+1,dp)+1;
    }
    if(dp[i][j] !=-1){
        return dp[i][j];
    }
    return dp[i][j]=max(LCS(A,B,i+1,j,dp),LCS(A,B,i,j+1,dp));
}
int main(){
    char A[10]="AGGTAB";
    char B[10]="GXTXAYB";
    int dp[10][10];
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            dp[i][j]=-1;
        }
    }
    int k=LCS(A,B,0,0,dp);
    cout<<"\n The longest common subsequeunce is:- "<<k<<endl;
    return 0;
}