
/*A subarray of array a of length n is a contiguous segment from a[i] through 
where 0<i<=j<n*/

/*Here we are going to find the all possible subarray of the given array*/
#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3};
    int len=sizeof(A)/sizeof(int);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
          for(int k=i;k<=j;k++){
             cout<<A[k]<<" ";
          }
          cout<<endl;
        }
    }
}