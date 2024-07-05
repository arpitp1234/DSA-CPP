/*Student Challenge-4*/
/*Finding Duplicate element*/
/*1.Counting Duplicate in Sorted Array*/
/*2.Finding Duplicate in Sorted Array*/
/*Counting Duplicate element in sorted array*/

/*1)Counting Duplicate element in sorted array*/

/*#include<iostream>
using namespace std;

int main(){
    int A[10]={3,6,8,8,10,12,15,15,20};
    int n=10;
    int j=0;
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1]){
            j=i+1;
            while(A[i]==A[j]){
                j++;
            }
        }
    cout<<A[i]<<" is appending "<<j-i<<" times "<<endl;
    i=j-1;
    }
    return 0;
}
*/

/*2)Finding Duplicate in sorted array*/

/*
#include<iostream>
using namespace std;

int main(){
    int A[10]={2,6,8,8,10,12,15,15,20};
    //find the number of elemnt
    int n=10;
    int lastduplicate=0;
    for(int i=0;i<n-1;i++){
        if(A[i]==A[i+1] && A[i]!=lastduplicate){
            cout<<A[i]<<endl;
            lastduplicate=A[i];
        }
    }
    return 0;
}
*/
/*3)Finding Duplicate using hash table*/

/*
#include<iostream>
using namespace std;

int main(){
    int A[10]={2,3,4,5,6,7,8,9,9,10};
    //step1:Find the highest element in the aray
    int highest=20;
    //step2:declare the arraay of highest elemnt
    int Hash[20]={0};
    //Step3:Find the size of arry
    int n=10;
    for(int i=0;i<10;i++){
        Hash[A[i]]++;
    }
    for(int i=0;i<highest;i++){
        if(Hash[i]>1){
            cout<<i<<"occur "<<Hash[i]<<" times "<<endl;
        }
    }
    return 0;
}

*/

















































































































































































































