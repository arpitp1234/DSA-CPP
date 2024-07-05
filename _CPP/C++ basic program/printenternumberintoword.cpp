#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    int k;
    cout<< "Enter the first number:-  ";
    cin>>num;
    while(num>0){
      int j=num%10;
        sum=sum*10+j;
        num=num/10;
      }
    while(sum>0){
      k=sum%10;
      switch (k)
      {
      case 1:
        cout<< "one ";
        break;
      case 2:
        cout<< "two ";
         break;
      case 3:
        cout<< "three ";
         break;
      case 4:
        cout<< "four ";
         break;
      case 5:
        cout<< "five ";
         break;
      case 6:
        cout<< "six ";
         break;
      case 7:
        cout<< "seven ";
         break;
      case 8:
        cout<< "Eight ";
         break;
      case 9:
        cout<< "nine ";
         break;
      }
   sum=sum/10;
    }
 return 0;
}