/*1.Local Variable as Recursion*/
/*#include<iostream>
using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}
int main(){
    int a=5;
    printf("%d",fun(a));
    return 0;
}*/
/*2.Static Variable as recursion*/
/*
#include<iostream>
using namespace std;

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+n;
    }
}
int main(){
    int a=5;
    printf("%d",fun(a));
    return 0;
}
*/

/*If there is not static simple int x=0 then result*/

/*#include<iostream>
using namespace std;

int fun(int n){
    int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    cout<<fun(a);
    return 0;
    
}*/



/*--------------------------------------------Example Related To Static Variable ,Local Variable and Global Variable-------------------------------------------------------------*/


/*1.Related to Static Variable*/

/*

#include<iostream>
using namespace std;

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    cout<<fun(a)<<endl;
    return 0;
}
*/
/*2.Related to Local Variable*/

/*#include<iostream>
using namespace std;

int fun(int n){
    int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int a=5;
    cout<<fun(a)<<endl;
    return 0;
}
*/




















































































































































































































































































































