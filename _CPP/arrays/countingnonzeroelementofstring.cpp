#include<iostream>
using namespace std;

int main(){
    int a[3][3]={{0,0,1},
                 {0,0,2},
                 {0,0,3}};
    int len=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j] != 0){
             len++;
            }
        }
    }
    cout<<"Total no of non zero element in the inputed matrix is:- "<<len;
    return 0;
}