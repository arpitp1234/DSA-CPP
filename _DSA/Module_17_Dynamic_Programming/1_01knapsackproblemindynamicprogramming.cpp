/*01 knapsack problem using dynamic programming*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int P[5]={0,1,2,5,6};
    int wt[5]={0,2,3,4,5};
    int m=8,n=4; //here m is maximum capacity;
    int k[5][9]; //it is a table we are creating for solving the problem

    for(int i=0;i<=n;i++){
        for(int w=0;w<=m;w++){
            if(i==0 || w==0){
                k[i][w]=0;
            }else if(wt[i]<=w){
                k[i][w]=P[i]+k[i-1][w-wt[i]]>k[i-1][w] ? P[i]+k[i-1][w-wt[i]]:k[i-1][w];
            }else{
                k[i][w]=k[i-1][w];
            }
        }
    }
cout<<"maximum weight of object can be included in knapsack is:- "<<k[n][m];

//For knowing which object are included;
  cout<<"Here:- "<<endl;
  cout<<"1=object included"<<endl<<"0= object not included"<<endl;
  cout<<"Therefore:- "<<endl;
  int i=n;
  int j=m;
  while(i>0 && j>0){
    if(k[i][j]==k[i-1][j]){
        cout<<i<<"=0"<<endl;
        i--;
    }else{
        cout<<i<<"=1"<<endl;
        j=j-wt[i];
        i--;
    }
  }
  return 0;
}