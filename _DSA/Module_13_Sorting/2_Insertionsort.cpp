/*2z)Insertion sort*/
/*
Why word insertion is taken

Here insertion mean inserting an element in sorted array at sorted position.

Insert an element from unsorted array to correct postion in sorted array.


    Time taken in inserting in array
      
         min time O(1)==>1 element inserted
         max time o(n)==>n element shifted.

    
    Time inserting in linked list

           traversing taken time

        min element O(1)<= traversing 1 element
        max time 0(n)<= traversing n element.


          time complexity :-     
                   min time=>O(n);
                  (max time)=O(n*n);


Few thing about insertion sort

1)One pass or two pass will not give any useful result in insertion sort

2)We have seen insertion sort in array as well as in linked list,so in an array we have to shift an elment bu tin linked list we does not have 
to shift elmeent

3)Insertion sort is more useful and compatible in linked list than in array
                     or 
    Insertion sort is designed for linked list.


*/

/*Method 1*/

#include<iostream>
using namespace std;

void Insertion(int A[],int n){
    int current;
    int j;
    for(int i=1;i<n;i++){
        current=A[i];
        for(j=i-1;j>=0 && A[j]>current;j--){
            A[j+1]=A[j];
        }
        A[j+1]=current;
    }
}
int main(){
    int A[]={1,3,2,4,5,7,8,9,10,6};
    int n=10;
    Insertion(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}