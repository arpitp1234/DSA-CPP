/*Menu driven program in cpp*/

#include<iostream>
#include<string.h>
using namespace std;

class Node{
  public:
  char name[10];
  int id;
}element[10];

int main(){
  int ch,i=0,j=0,k=0;
  while(ch !=4){
    cout<<"\n 1.insert \n 2.delete \n 3.display \n 4.exit";
    cout<<"\nEnter your choice \n";
    cin>>ch;
    switch (ch)
    {
    case 1:
      if(i==10){
        cout<<"queue is full";
      }else{
        cout<<"Enter your name:- ";
        cin>>element[i].name;
        cout<<"Enter id:- ";
        cin>>element[i].id;
        cout<<"successfully inserted ";
        i++;
      }
      break;
      case 2:
        if(i==0){
           cout<<"queue is empty";
        }else{
           k=0;
           while(k<i){
             strcpy(element[k].name,element[k+1].name);
             element[k].id=element[k+1].id;
             k++;
           }
           i--;
        }
      break;
      case 3:
       if(i==0){
          cout<<"there is no element in the queue";
       }else{
        j=0;
        while(j<i){
           cout<<"\n name = "<<element[j].name;
           cout<<"\n id= "<<element[j].id;
           j++;
        }
       }
       break;
    }
  }
  return 0;
}