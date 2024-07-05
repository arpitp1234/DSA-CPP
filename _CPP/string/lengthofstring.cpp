#include<iostream>
using namespace std;

int main(){
    string s;
    int len=0;
    cout<<"Enter the string:- ";
    cin>>s;
    for(int i=0;s[i]!= '\0';i++){
        len++;
    }
    cout<<"The length of the string is:- "<<len;
    return 0;
}