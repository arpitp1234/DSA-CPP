#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
    char name[20];
    int id;
}element[10];

int main(){
    int ch,i=0,j=0;
    do{
        cout<<"1.push\n  2.pop\n  3.display\n 4.exit\n enter your choice:- ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            if(i==10){
                cout<<"Stack overflow";
            }else{
                cout<<"Enter name:- ";
                cin>>element[i].name;
                cout<<endl;
                cout<<"Enter id:- ";
                cin>>element[i].id;
                i++;
            }
            break;
        case 2:
          if(i==0){
            cout<<"Stack underflow";
          }else{
            i--;
          }
          break;

        case 3:
        if(i==0){
            cout<<"No element to display:- \n";
        }else{
            j=i-1;
            while(j>=0){
                cout<<element[j].name<<" ";
                cout<<element[j].id<<" ";
                j--;
                cout<<endl;
            }
        }
        }
    }while(ch<4);
    return 0;
}