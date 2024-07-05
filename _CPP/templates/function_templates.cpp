/*Addition of two number without using template*/

/*#include<iostream>
using namespace std;


int add(int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    cout<<"First addition is:- "<<add(2,3)<<endl;
    cout<<"second addition is:- "<<add(4,5)<<endl;
    return 0;
}
*/

/*Addition of two using template*/

#include<iostream>
using namespace std;

template<class T>
T add(T a,T b){
    T c;
    c=a+b;
    return c;
}

int main(){
   cout<<"First addition is:- "<<add<int>(2,3)<<endl;
   cout<<"Second addition is:- "<<add<int>(4,5)<<endl;
   return 0;
}






































































































