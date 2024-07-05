/*5.Finding Duplicate element in unsorted array*/
//Method1
/*#include<iostream>
using namespace std;

int main(){
    int A[10]={1,2,3,4,4,5,5,7,8};
    //step1:Find the heighest element in the array
    int heighest=9;
    //step2:Declare the array of size of highest element
    int hash[9]={0};
    for(int i=0;i<10;i++){
        hash[A[i]]++;
    }
    for(int i=0;i<10;i++){
        if(hash[i]>1){
            cout<<i<<" occur "<<hash[i]<< " times "<<endl;
        }
    }
    return 0;
}
*/
//Method2

#include<iostream>
using namespace std;

int main(){
    int A[10]={8,3,6,4,6,5,6,8,2,6};
    int count=1,i=0,j=0;
    int n=10;
    for(int i=0;i<n-1;i++){
        if(A[i]!=-1){
            for(int j=i+1;j<n-1;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1){
                cout<<A[i]<<" occur "<<count<<" times "<<endl;
            }
            count=1;
        }
    }
    return 0;
}


















































































































































