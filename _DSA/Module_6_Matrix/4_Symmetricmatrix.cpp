/*Symmetric Matrix*/
/*A matrix is called symmetrix if its is equal to its transpose*/
        
        /* M=  2  2  2  2  2
               2  3  3  3  3
               2  3  4  4  4
               2  3  4  5  5
               2  3  4  5  6*/
/*
For symmetrix Matrix element at location (i,j) is equal to element at location (j,i)
*/

/*
     if(M[i,j]=M[j,i])
     then it is symmetrix matrix

Kyoki upper triangular and lower triangular ke elemnet smae hoge toh ya hammare liye sufficient hoga ki ham elment ko upper triangular form me store ya element 
ko lower triangular form me store kare


Toh ham symmetri matrix ko reprsent karne ke liye yah toh lower triangular matrix use karege and upper triangular matrix use karenge


Toh hamne lower triangular and upper triangular dono dekah hai,isme se koi ek method use kar sakte hai
*/

/*-------------------Here we are going to use upper triangular method------------------------------------------*/

/*--------------------------------- In symmetrix matrix M[i,j]=M[j,i]---------------------------------------*/


/*Here we are going to use row major mapping*/
                
              //   Index[[i][j]]=[(i-1)*n - (i-2)*(i-1)/2] + (j-1)


#include<iostream>
#include<process.h>
using namespace std;

class symmetric{
    private:
    int n;
    int *A;
    public:
    symmetric(){
        this->n=3;
        A=new int[6];
    }
    symmetric(int a){
        this->n=a;
        A=new int[n*(n+1)/2];
    }
    ~symmetric(){
        delete []A;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    int getdimension(){
        return n;
    }
    void displayarray();
};

void symmetric::set(int i,int j,int x){
    if(i<=j){
        A[n*(i-1)-(i-2)*(i-1)/2+(j-i)]=x;
    }
}
int symmetric::get(int i,int j){
     if(i<=j){
        return A[n*(i-1)-(i-2)*(i-1)/2+(j-i)];
     }else{
        return A[n*(j-1)-(j-2)*(j-1)/2+(i-j)];
     }
}


void symmetric::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j){
                cout<<" "<<A[n*(i-1)-(i-2)*(i-1)/2+(j-i)];
            }else{
                cout<<" "<<A[n*(j-1)-(j-2)*(j-1)/2+(i-j)];
            }
        }
    cout<<endl;
    }
}
void symmetric::displayarray(){
    for(int i=0;i<n*(n+1)/2;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    symmetric t(4);
    int x;
    cout<<"Enter all the element"<<endl;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cin>>x;
            t.set(i,j,x);
        }
        cout<<endl;
    }
    t.display();
    cout<<t.get(1,1);
    return 0;
}

//Symmetric matrix using column major mapping
//In symmetric matrix M[i,j]=M[j]; 


           //formula  Index[A[i][j]]=[j*(j-1)/2+i-1]

//#include<iostream>
//#include<process.h>
//using namespace std;
//
//class symmetric{
//    private:
//    int n;
//    int *A;
//    public:
//    symmetric(){
//        this->n=3;
//        A=new int[6];
//    }
//    symmetric(int a){
//        this->n=a;
//        A=new int[n*(n+1)/2];
//    }
//    ~symmetric(){
//        delete []A;
//    }
//    void set(int i,int j,int x);
//    void get(int i,int j);
//    void display();
//    int getdimension(){
//        return n;
//    }
//    void displayarray();
//};
//
//void symmetric::set(int i,int j,int x){
//     if(i<=j){
//        A[j*(j-1)/2+(i-1)]=x;
//     }
//}
//void symmetric::get(int i,int j){
//     if(i<=j){
//        cout<<A[j*(j-1)/2+(i-1)]<<" ";
//     }else{
//        cout<<" "<<A[i*(i-1)/2+(j-1)];
//     }
//}
//
//void symmetric::display(){
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=n;j++){
//            if(i<=j){
//                cout<<" "<<A[j*(j-1)/2+(i-1)];
//            }else{
//                cout<<" "<<A[i*(i-1)/2+(j-1)];
//            }
//        }
//        cout<<endl;
//    }
//}
//void symmetric::displayarray(){
//    for(int i=0;i<n*(n+1)/2;i++){
//        cout<<A[i]<<" ";
//    }
//}
//int main(){
//    symmetric t(4);
//    int x;
//    cout<<"Enter all the elements"<<endl;
//    for(int i=1;i<=4;i++){
//        for(int j=1;j<=4;j++){
//            cin>>x;
//            t.set(i,j,x);
//        }
//        cout<<endl;
//    }
//    cout<<"The matrix is:- "<<endl;
//    t.display();
//    t.displayarray();
//    return 0;
//}

