/*-----------------------------------------------1.Sum of first n natural number using recursion----------------------------------------------------------*/
/*
#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1)+n;
    }
}
int main(){
    cout<<"The sum of two number is:- "<<sum(5)<<endl;
    return 0;
}
*/


/*Using formula*/

/*#include<iostream>
using namespace std;

int sum(int n){
    return (n*(n+1))/2;
}

int main(){
    cout<<sum(5);
    return 0;
}*/

/*Using Loop*/
/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number:- ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}

*/

/*2----------------------------------------------------------2.Factorial of n Number ------------------------------------------------------------------------------------*/
/*
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }
}
int main(){
    cout<<"factorial is:- "<<fact(5)<<endl;
    return 0;
}
*/
/*3-----------------------------------------------------Power Using Recursion-----------------------------------------------------------------------------------------------*/

/*#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0){
        return 1;
    }else{
        return pow(m,n-1)*m;
    }
}
int main(){
    cout<<pow(2,3);
    return 0;
}*/
/*-------------------------------------------Now we are going to reduce the time complexity------------------------------------------------------------------------*/
/*
#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }else{
        return m*pow(m*m,n/2);
    }
}
int main(){
    cout<<pow(2,3)<<endl;
    return 0;
}
*/

/*4-------------------------------------------Taylor Series------------------------------------------------------------------------------------------------------------------------*/
/*#include<iostream>
using namespace std;

int e(int x,int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return 1;
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    cout<<e(4,2)<<endl;
    return 0;
}*/

/*---------------------------------Now we are going to do taylor series using Horner Rule----------------------------------------------------------------------------------------*/

/*First Using Loop*/

/*#include<iostream>
using namespace std;

int e(int x,int n){
    int s=1;
    while(n>0){
        s=1+(x/n)*s;
        n--;
    }
    return s;
}
int main(){
    cout<<e(4,2)<<endl;
    return 0;
}*/

/*Using Another Method*/
/*Using recursion*/
/*#include<iostream>
using namespace std;
int e(int x,int n){
    static int s=1;
    if(n==0){
        return 1;
    }
    s=1+(x/n)*s;
    return e(x,n-1);
}
int main(){
    cout<<e(7,1)<<endl;
    return 0;
}
*/
/*------------------------------------------------------Fibonacci Series--------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------Method 1----------------------------------------------------------------------------*/
/*#include<iostream>
using namespace std;

int Fibonacci_series(int n){
    if(n<=1){
        return n;
    }else if(n>1){
        return Fibonacci_series(n-1)+Fibonacci_series(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the number till which do you want the the series:- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<Fibonacci_series(i)<<" ";
    }
    return 0;
}*/
/*------------------------------------------------------------Method 2------------------------------------------------------------------------------------*/
/*
#include<iostream>
using namespace std;

int Fibonacci_series(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return Fibonacci_series(n-1)+Fibonacci_series(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the number till which do you want the series:- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<Fibonacci_series(i)<<" ";
    }
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*Excessive Recursion:- When a recursive function calling itself multiple time for same value then it is known as excessive recursion*/
/*#include<iostream>
using namespace std;

int F[10];
int mfib(int n){
    if(n<=1){
        F[n]=n;
    }else{
        if(F[n-2]==-1){
            F[n-2]=mfib(n-2);
        }else if(F[n-1]==-1){
            F[n-1]=mfib(n-1);
        }
        F[n]=F[n-1]+F[n-2];
        return F[n];
    }
}
int main(){
   for(int i=0;i<10;i++){
         F[i]=-1;
   }
   cout<<mfib(0)<<endl;
   cout<<mfib(1)<<endl;
   cout<<mfib(2)<<endl;
   cout<<mfib(3)<<endl;
   cout<<mfib(4)<<endl;
   cout<<mfib(5)<<endl;
   return 0;  
}*/
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*Combinational Formula/Selection Formula*/

  /*We known combinational formula/selection formula*/
     //  nCr =n!/r!*(n-r)!

/*#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int nCr(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
int main(){
    cout<<nCr(5,1);
    return 0;
}
*/
/*Solving nCr with another formula*/
       /*nCr=(n-1)C(r-1)+(n-1)Cr*/

/*#include<iostream>
using namespace std;

int nCr(int n,int r){
    if(r==0 || n==r){
        return 1;
    }else{
        return nCr(n-1,r-1)+nCr(n-1,r);
    }
}
int main(){
    cout<<nCr(5,1);
    return 0;
}*/

/*Tower of Harnoi using Recursion*/

/*#include<iostream>
using namespace std;

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<B<<")";
        TOH(n-1,B,A,C);
    }
}
int main(){
    int n=3;
    TOH(n,1,2,3);
    return 0;
}*/
























 



























































































































































































































































































































































































































































































































































































































































































































