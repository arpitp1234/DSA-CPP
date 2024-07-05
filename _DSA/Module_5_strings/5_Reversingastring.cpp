//Method1:Taking help of another array and then reversing

#include<iostream>
using namespace std;

int main(){
    char A[]="python";
    char B[10];
    int i=0;
    int j;
    for(i=0;A[i]!=0 ;i++){}
    i=i-1;
    for(j=0;i>=0;j++,i--){
        B[j]=A[i];
    }
    B[j]='\0';
    for(int i=0;B[i]!='\0';i++){
        cout<<B[i];
    }
    return 0;
}


//Method 2:Using swapping technique by swapping from starting position and the end position

#include<iostream>
using namespace std;

int main(){
    char A[]="python";
    char t;
    int i,j;
    for(j=0;A[j]!='\0';j++){}
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    cout<<"String after reversing is:- "<<endl;
    for(int i=0;A[i]!='\0';i++){
        cout<<A[i];
    }
    return 0;
}


































































