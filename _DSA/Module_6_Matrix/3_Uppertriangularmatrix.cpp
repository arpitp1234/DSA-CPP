/*Upper triangular matrix*/
/*A upper triangular matrix is a square matrix in which upper triangular part of the matrxi in non zero element and lowertriangular part is all zero*/


    /* M=  a11 a12 a13  a14   a15
           0   a22 a23  a24   a25      
           0    0  a33  a34   a35
           0    0   0   a44   a45    
           0    0   0   0     a55          
        */
/*
           M[i,j]=0 if i>j
           M[i,j]=non zero if(i<=j)
        
    No of non zero element = 5+4+3+2+1

    for n*n matrix
    no of non zero elemnet =n*(n+1)/2

For n*n matrix

    total element=n*n

for n*n matrix

no of zero element =n*n- n*(n+1)/2

no of zero element= n*(n-1)/2

*/


/*Row Major Mapping*/
/*


         M=  a11  a12  a13  a14  a15
             0    a22  a23  a24  a25
             0    0    a33  a34  a35
             0    0    0    a44  a45
             0    0    0     0   a55


  A= [a11 ,a12 a13 ,a14,a15,a22,a23,a24,a25,a33 a34,a35,a44,a45,a55]

  Index[[i][j]]=[(i-1)*n - (i-2)*(i-1)/2] + (j-1)
*/

#include<iostream>
#include<process.h>
using namespace std;

class uppertriangular{
    private:
    int n;
    int *A;
    public:
    uppertriangular(){
        this->n=3;
        A=new int[6];
    }
    uppertriangular(int a){
        this->n=a;
        A=new int[n*(n+1)/2];
    }
    ~uppertriangular(){
        delete []A;
    }
    void set(int i,int j,int x);
    void get(int i,int j);
    void display();
    int getdimension(){
        return n;
    }
    void displayarray();
};

void uppertriangular::set(int i,int j,int x){
     if(i<=j){
        A[n*(i-1)-(i-2)*(i-1)/2+(j-i)]=x;
     }
}

void uppertriangular::get(int i,int j){
     if(i<=j){
        cout<<A[n*(i-1)-(i-2)*(i-1)/2+(j-i)]<<" ";
     }else{
        cout<<" 0";
     }
}

void uppertriangular::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<" "<<A[n*(i-1)-(i-2)*(i-1)/2+(j-i)];
            }else{
                cout<<" 0";
            }
        }
     cout<<endl;
    }
    
}

void uppertriangular :: displayarray(){
    for(int i=0;i<n*(n+1)/2;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main(){
    uppertriangular t(4);
    int x;
    cout<<"Enter all element "<<endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cin>>x;
            t.set(i,j,x);
        }
        cout<<endl;
    }
    cout<<"The matrix is:- "<<endl;
    t.display();
    t.displayarray();
    return 0;
}


/*ii)column major mapping*/

/*In column major mapping elemnet are store column by column*/

/*
           
           M= a11 a12  a13  a14  a15
              0   a22  a23  a24  a25
              0    0   a33  a34  a35
              0    0    0   a44  a45
              0    0    0   0    a55

column major
   
     A=[a11 ,a12,a22,a12,a23,a33,a13 ,a24,a34,a44,a15,a25,a35,a45,a55]
    
     Index[A[i][j]]=[j*(j-1)/2+i-1]

*/
#include<iostream>
#include<process.h>
using namespace std;

class uppertriangular{
    private:
    int n;
    int *A;
    public:
    uppertriangular(){
        this->n=3;
        A=new int[6];
    }
    uppertriangular(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~uppertriangular(){
        delete []A;
    }
    void set(int i,int j,int x);
    void get(int i,int j);
    void display();
    int getdimension(){
        return n;
    }
    void displayarray();
};
void uppertriangular::set(int i,int j,int x){
    if(i<=j){
        A[j*(j-1)/2+(i-1)]=x;
    }
}
void uppertriangular::get(int i,int j){
    if(i<=j){
        cout<<A[j*(j-1)/2+(i-1)]<<" ";
    }else{
        cout<<" 0";
    }
}
void uppertriangular::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<" "<<A[j*(j-1)/2+(i-1)];
            }else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}
void uppertriangular::displayarray(){
    for(int i=0;i<n*(n+1)/2;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    uppertriangular t(4);
    int x;
    cout<<"Enter all the element"<<endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cin>>x;
            t.set(i,j,x);
        }
    }
    cout<<"The  matrix is:- "<<endl;
    t.display();
    t.displayarray();
    return 0;
}












