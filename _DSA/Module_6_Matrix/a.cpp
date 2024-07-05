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
                    cout<<" "<<A[2*n-1+(i-1)];
                }else{
                    cout<<" 0";
                }
            }
            cout<<endl;
        }
    }
    void displayarray(){
        for(int i=1;i=3*n-2;i++){
            cout<<" "<<A[i-1];
        }
    }
};
int main(){
    tridiagonal t(3);
    int x;
    cout<<"Enter all the element:- \n";
    for(int i=1;i<=3;i++){
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