/*What is heap

Heap is compelete binary tree.

=>Complete binary tree=>(If binary tree represented in array then there should not black space in arrays.
          
            Node at index=>i;
            Left child at index=>2*i;
            Right child at index=>2*i+1;

=>if array is empty while filling the element of the tree then it is not binary tree.

=>Max heap:-Every node should have element greater than or equal to its descender.(i.e duplicate is allowed);(root is greater);
         for Max heap=>  priority_queue<int>maxH

=>Every node is having its element smaller then or equal to its descenders,then heap is called min heap.(root is smaller)
       
       for min heap=>(priority_queue < int, vector<int>, greater<int> > minH)


Summary:-

1)Heap is complete binary tree satifying any of the condition either max heap or min heap are mostly represented using arrays.

2)Heap is completer binary tree as it is complete binary tree so height of it will be (logn) only.

3)Heap is not useful for searching purpose.

4)In compelete binary tree we fill element level by level.


     /*Time taken for inserting in max heap=> o(log2n);



Opeartion of heap:-

i)Inserting in heap

   For inserting the procedure for max and min heap is same.

Time taken for inserting an element first insert and then arragement,for arrangement element may move up level by level,so work
that is time taken will equal ot height of tree i.e logn

                      time complexity for inserting 1 element =O(log2n);


ii)Creating heap for given elemnet

We do not need any external array of creating the heap,within the array we can adjust elemnt for creating heap,that's why it
is called in place heap creation that's is happening in same place.


                     time complexity :-

                          For 1 element:- logn
                          for n element:- nlogn;


iii)Deleting from heap.

=>In heap you can delete only root element from the heap.

        so it mean we can delete highest priority element.


 Once the root element in deleted then children me sabse bada hai usko delete kar do.


Heap sort:-

From heap you go on deleting the element and as you go on deleting one by one you get free space at end of arry,use that free space 
storing deleted element,So the element will be getting arranage they will be arraynge in descending order fro right hand onward,so finally
they will be ascending from left hand side.


   Step 1:-Create a heap for an element.
   Step 2:-Go on deleting element from heap one by one and start copy deleted elemnt at end of the array.


   analysis for heap:-

              create heap:- nlogn time
              delete heap:- nlogn time

            1 element deleting in heap takes(depend on height )
                                logn
            For all n element=>nlogn.

        Total time heap=>2nlogn

    Time complexity for heap O(nlogn).

*/

/*Program for heap*/

//Insert function for heap

#include<iostream>
using namespace std;

void Insert(int A[],int n){
    int i=n,temp;
    temp=A[i];

    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

int Delete(int A[],int n){
    int i,j,x,temp,val;
    
    val=A[1];
    A[1]=A[n];
    A[n]=val;
    i=1,j=i*2;
    
    while(j<n-1){
        if(A[j+1]>A[j]){
            j=j+1;
        }
        if(A[i]<A[j]){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }else{
            break;
        }
    }
    return val;
}
/*
For heap sort
step1:Inserting all element in the heap;
step2:Delelting all element in the heap;
*/

int main(){
    int H[]={0,2,5,8,9,4,10,7};

  //here zero is ignored we will not use position of zero

     for(int i=2;i<=7;i++){
        Insert(H,i);
     }
   
   //deleting all element will sort the array and thus procedure is called heapsort

   for(int i=7;i>1;i--){
     Delete(H,i);
   }

   cout<<"The heap is:- ";
   for(int i=0;i<=7;i++){
      cout<<H[i]<<" ";
   }
   return 0;
}




