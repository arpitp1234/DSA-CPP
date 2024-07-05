/*
A matrix which satisfy the condition

    
        A=    2 3 4 5 6
              7 2 3 4 5
              8 7 2 3 4
              9 8 7 2 3
             10 9 8 7 2

    A matrix which satisfy condition

        M[i,j]=M[i-1,j-1]
 
   known as toeplitz Matrix

*Toh yaha par sare element store na kar ke row ke element store kar lege and column ke element stoe kar lenge

  for 5*5 matrix
       total elmeent =5+4=9;

  for n*n matrix
      total element =n+n-1=2*n-1;

Storign element in the array
 
  A--->| 2 3 4 5 6 |  |7 8 9 10|

*Upper trinangualr wala element row me hoga and lower trinagualr wala element column me hoga

   finding element
         Index(A[i][j])

         case1: if(i<=j){
            Index=j-1
         }
         case 2: if(i>j){
            index =n+i-j-1;
         }
*/
#include<iostream>
using namespace std;

class toeplitz{
   private:
   int n;
   int *A;
   public:
   toeplitz(){
      this->n=3;
      A=new int[5];
   }
   toeplitz(int a){
      this->n=a;
      A=new int[2*n-1];
   }
   ~toeplitz(){
      delete []A;
   }
   void set(int i,int j,int x){
      if(i<=j){
         A[j-1]=x;
      }else if(i>j){
         A[n+i-j-1]=x;
      }
   }
   void get(int i,int j){
      if(i<=j){
         cout<<" "<<A[j-1];
      }else if(i>j){
         cout<<" "<<A[n+i-j-1];
      }
   }
   void display(){
      for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
            if(i<=j){
               cout<<" "<<A[j-1];
            }else if(i>j){
               cout<<" "<<A[n+i-j-1];
            }
         }
         cout<<endl;
      }
   }
   void displayarray(){
      for(int i=0;i<2*n-1;i++){
         cout<<A[i]<<" ";
      }
   }
};
int main(){
   toeplitz t(4);
   int x;
   cout<<"Enter all the element:- \n";
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4;j++){
         cin>>x;
         t.set(i,j,x);
      }
      cout<<endl;
   }
   cout<<endl;
   t.display();
   cout<<endl;
   t.displayarray();
   cout<<endl;
   t.get(4,4);
   return 0;
}