/*We say string is pallindrome when on reversing it looks like original one*/
             /*
               madam
                ||
               madam
        so it is a pallindrome string
           */


//Method 1:For checking the pallindrome

//#include<iostream>
//using namespace std;
//
//int main(){
//    string str="12321";
//    int len=0;
//    for(int i=0;str[i]!= 0;i++){
//        len++;
//    }
//    for(int i=0;i<len/2;i++){
//        if(str[i]!= str[len-1-i]){
//            cout<<"not a pallindrome";
//            exit(0);
//        }
//    }
//    cout<<"The stirng is a pallindrome";
//    return 0;
//}
//Method2 :Checking using function

#include<iostream>
using namespace std;

int pallindrome(char *str,int len){
    for(int i=0;str[i]!= '\0';i++){
        if(str[i]!= str[len-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[]="madam";
    int len=0;
    for(int i=0;str[i]!= '\0';i++){
        len++;
    }
    int k;
    k=pallindrome(str,len);
    if(k==0){
        cout<<"String is not a pallindrome";
    }else{
        cout<<"String is a pallindrome";
    }
    return 0;
}









































































