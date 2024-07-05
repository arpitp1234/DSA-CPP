/*-------------------------Here we are going to talk about the type of Recursion----------------------------------------------------------------------------*/
/*
1.Tail Recursion
2.Head Recursion
3.Tree Recursion
4.Indirect Recursion
5.Nested Recursion
*/

/*1.Tail Recursion:- If the recursive function is calling itself and that call is the last statement of the function then it is called as Tail Recursion*/

/*#include<iostream>
using namespace std;

int fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
    return 0;
}
int main(){
    
    cout<<fun(5)<<endl;
    return 0;
}*/

  /*In Tail Recursion everything is performed at calling time nothing is performed at returning time*/

/*2.Head Recursion:- If the recurive function is calling itself and that recursive call is the first statement of then it is called Head Recursion*/

/*#include<iostream>
using namespace std;

int fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun(a)<<endl;
    return 0;
}*/

/*3.Tree Recursion*/
/*If a function is calling itself only one time then it is called as Linear Recursion.If a function is calling itself more than the one time then it is called as Tree Recursion*/


/*3.Tree Recursion*/

/*If a function is calling itself only one time then it is called as Linear Recursion.If a function is calling itself more than the one time then it is called as Tree Recursion*/

/*#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int n=5;
    fun(5);
    return 0;
}
*/
/*4.Indirect Recursion*/
/*In indirect Recursion there are more than one function calling to one another in cicular fashion*/

/*#include<iostream>
using namespace std;

void funA();
void funB(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
    int a=5;
    funA(a);
    return 0;
}*/
/*Nested Recursion*/
/*Jab ke koi recursive funciton apne app ko call kare and uske call ke paramete me khue ek recursive function hai to ham use nested recursion kehte hai*/
/*
#include<iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return (n-10);
    }else{
        return fun(fun(n+1));
    }
}
int main(){
    int r;
    cout<<fun(95);
    return 0;
}
*/
































































































































































































































































































































































