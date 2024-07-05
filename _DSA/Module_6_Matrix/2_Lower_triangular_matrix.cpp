/*A lower triangular matrix is a square matrix in which lower triagular part of the matrix is non zero element and upper triangular part is all zero

   Defining lower triangular matrix as
   M[i,j]=0;if(i<j)
   M[i,j]=non zero if(i>=j)

For of non zero element =first row+second row+third row+fourth row+fifth row
for n*n matrix:- total elemnt =n*n=n2

total zero element=n2-n*(n+1)/2=(n*(n-1))/2;

Reprsenting lower triangular matrix in a program

A lower triangular matrix is a square matrix in which lower triangualr part of the matrix is non zero element and upper triangular part is all zero

 Defining lower triagular matrix as

 M[i,j]=0;if(i<j)
 M[i,j]=non zero if(i>=j)

Non of non zero element=first row+second row+third row+fouthr row+fifth row
For n*n matrix:- total element=n*n=n2

  total zero element =n2-n*(n+1)/2=n*(n-1)/2;

Reprsenting lower triangular matrix in a program

When we will use lower triangular matrix in program then we will try to avoid storing zero as it will same memory space and as well as we can save time in processing


For storing non zero element [no of non zero element =n*(n+1)/2]
*/


/**********************************************Using Row Major Mapping method for storing element*********************************************************************/

/*
                  M=   a11   0    0   0   0
                       a21  a22   0   0   0
                       a31  a32  a33  0   0
                       a41  a42  a43  a44 0
                       a51  a52  a53  a54 a55

      No of element that you have to store is :- 1+2+3+4+5+6+........n+1=n*(n+1)/2




      in row major mapping we will store element row by row

      A[a11,a21,a22,a31,a32,a41,a42,a43,a44,a51,a52,a53,a54,a55]

      For any index
         In Row Major Mapping:-     Index A[i][j] =[ i*(i-1)/2+j-1]
  
*/
/*Row Major Mapping*/

#include<iostream>
#include<process.h>
using namespace std;

class lowertriangle{
   private:
   int n;
   int *A;
   public:
   lowertriangle(){
      this->n=2;
      A=new int[2];
   }
   lowertriangle(int n){
      this->n=n;
      A=new int[n*(n+1)/2];
   }
   ~lowertriangle(){
      delete []A;
   }
   void set(int i,int j,int x);
   int get(int i,int j);
   void Display();
   int GetDimension(){
      return n;
   }
};

void lowertriangle::set(int i,int j,int x){
    if(i>=j){
      A[i*(i-1)/2+j-1]=x;
    }
}
int lowertriangle::get(int i,int j){
   if(i>=j){
      return A[i*(i-1)/2+j-1];
   }else{
      return 0;
   }
}
void lowertriangle::Display(){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i>=j){
            cout<<" "<<A[i*(i-1)/2+j-1];
         }else{
            cout<<" 0";
         }
      }
      cout<<endl;
   }
}

int main(){
   lowertriangle d(4);
   int x;
   cout<<"Enter all the element"<<endl;
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4;j++){
         cin>>x;
         d.set(i,j,x);
      }
      cout<<endl;
   }
   cout<<"The matrix is:- "<<endl;
   d.Display();
   return 0;
}

/*-------------------------------Using column major mapping for storing the elmenet--------------------------------------------------------------------------------------------*/
/*
In column major mapping element are store  column by column

            
                  M= a11   0     0   0    0
                     a21  a22    0   0    0
                     a31  a32   a33  0    0
                     a41  a42   a43  a44  0
                     a51  a52   a53  a54  a55

   Index(A[i][j])=[n*(j-1)-(j-2)*(j-1)/2+(i-j)]

*/

/*Column major mapping*/

#include<iostream>
#include<process.h>
using namespace std;

class lowertriangle{
   private:
   int *A;
   int n;
   public:
   lowertriangle(){
      this->n=2;
      A=new int[3];
   }
   lowertriangle(int n){
      this->n=n;
      A=new int[n*(n+1)/2];
   }
   ~lowertriangle(){
      delete []A;
   }
   void set(int i,int j,int x);
   int get(int i,int j);
   void Display();
   int GetDimension(){
      return n;
   }
   void Displayarray();
};

void lowertriangle::set(int i,int j,int x){
       if(i>=j){
         A[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
       }
}
int lowertriangle::get(int i,int j){
     if(i>=j){
      return A[n*(j-1)-(j-2)*(j-1)/2+i-j];
     }else{
      return 0;
     }
}

void lowertriangle::Display(){
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i>=j){
            cout<<" "<<A[n*(j-1)-(j-2)*(j-1)/2+i-j];
         }else{
            cout<<" "<<"0";
         }
      }
      cout<<endl;
   }
}

void lowertriangle::Displayarray(){
   for(int i=0;i<(n*(n+1))/2;i++){
      cout<<A[i]<<" ";
   }
}
int main(){
   lowertriangle d(4);
   int x;
   cout<<"Enter all the element"<<endl;
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4;j++){
         cin>>x;
         d.set(i,j,x);
      }
      cout<<endl;
   }
   cout<<"The matrix is:- "<<endl;
   d.Display();
   d.Displayarray();
   return 0;
}

