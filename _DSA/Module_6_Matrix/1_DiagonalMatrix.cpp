/*1)Diagonal Matrix*/
/*In Diagonal Matrix,other than diagonal all number must be zero,then we will say it is diagonal Matrix*/
/*
     So M[i,j]=0;  if (i!= j)
*/
#include<iostream>
using namespace std;


class Diagonal{
    private:
    int n;
    int *A;
    public:
    Diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    ~Diagonal(){
        delete []A;
    }
    void set(int i,int j,int x){
        if(i==j){
            A[i-1]=x;
        }
    }
    int get(int i,int j){
        if(i==j){
            return A[i-1];
        }else{
            return 0;
        }
    }
    void Display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    cout<<" "<<A[i-1];
                }else{
                    cout<<" 0";
                }
            }
            cout<<endl;
        }
    }
};

int main(){
    Diagonal d1(4);
    d1.set(1,1,3);
    d1.set(2,2,4);
    d1.set(3,3,5);
    d1.set(4,4,6);
    d1.Display();
    return 0;
}


































































































