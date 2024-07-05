/*Tridiagonal Matrix or Triband Matrix*/

/*A tridiagonal Matrix has non zero element only on the main diagonal ,the diagonal upon the main diagonal and the diagonal below the 
main diagonal*/

  /*
      Tridiagonal Matrix  a11  a12   0   0   0
                          a21  a22  a23  0   0
                          0    a32  a33  a34 0
                          0    0    a43  a44 a45
                          0    0    0    a54 a55
    */

   /*
      condition for tridiagonal 
               Main  diagoanl  i-j=0
               lower diagonal  i-j=1;
               upper digaonal  i-j=-1
    */

/*So elemment whose row and column are satisfying above indices,they must be non zero and other must be zero*/

      /*
        combining above

               | i-j| <=1
      
       Finally 
          defining tridiagonal Matrix
             M[i,j]=non zero if |i-j| <=1
             M[i,j]=zero       if|i-j| >1
    
    For 5*5 matrix
            total element 4+5+4=13
        
    For n*n matrix 
           total elemen=(n-1)+n+(n-1)

//For storing non zero elemnet we will nont taking two dimension array ,we will be taking single dimensional array

//Representing tridiagonal Matrix as single dimension array
     
      A      | a21  a32  a43   a54  | a11  a22  a33  a44  a55 | a12  a23  a34  a45 |
                lower diagonal       main diagonal            upper diagonal


//we will store elemnt diagonal by diagonal first we store lower diagonal element

  Relation :-      Index(A[i][j])

  Relation :-       Index(A[i][j])
                      case1: if(i-j)=1
                               index=(j-1)
                      case2: if(i-j)=0
                               index =(n-1)+(i-1)
                      case3: if(i-j)=1
                             index=2n-1+i-1
*/

#include<iostream>
using namespace std;

class tridiagonal{
    private:
    int n;
    int *A;
    public:
    tridiagonal(){
        this->n=4;
        A=new int[10];
    }
    tridiagonal(int a){
        this->n=a;
        A=new int[3*n-2];
    }
    ~tridiagonal(){
        delete []A;
    }
   void set(int i,int j,int x){
        if(i-j==1){
            A[j-1]=x;
        }else if(i-j==0){
            A[n-1+(i-1)]=x;
        }else if(i-j==-1){
            A[2*n-1+(i-1)]=x;
        }
    }
   void get(int i,int j){
     if(i-j==1){
        cout<<" "<<A[j-1];
     }else if(i-j==0){
      cout<<" "<<A[n-1+(i-1)];
     }else if(i-j==-1){
       cout<<" "<<A[2*(n-1)+(i-1)];
     }else{
      cout<<" 0";
     }
   } 
    void display(){
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
              if(i-j==1){
                cout<<" "<<A[j-1];
              }else if(i-j==0){
                cout<<" "<<A[n-1+(i-1)];
              }else if(i-j==-1){
                cout<<"  "<<A[2*n-1+(i-1)];
              }else{
                cout<<" 0";
              }
          }
        cout<<endl;
        }
       
    }
  void displayarray(){
    for(int i=1;i<=3*n-2;i++){
        cout<<" "<<A[i-1];
    }
  }
};
int main(){
    tridiagonal t(3);
    int x;
    cout<<"Enter all the element:- \n";
    for(int i=1;i<=3;i++) {
        for(int j=1;j<=3;j++){
            cin>>x;
            t.set(i,j,x);
        }
        cout<<endl;
    }  
    t.display();
    cout<<endl;
    t.displayarray();
    return 0;
}