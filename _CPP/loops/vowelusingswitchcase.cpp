#include<iostream>
using namespace std;

int main(){
     char ch;
     cout<<"Enter the character which you want to know that it is a vowel or not =";
     cin>>ch;
     switch (ch)
     {
     case 'a':
          cout<<"It is a vowel";
        break;
     case 'e':
         cout<<"It is a vowel";
         break;
     case 'i':
         cout<<"It is a vowel";
     break;
      case 'o':
         cout<<"It is a vowel";
     break;
      case 'u':
         cout<<"It is a vowel";
     break;
     case 'A':
         cout<<"It is a vowel";
         break;
     case 'E':
          cout<<"It is a vowel";
        break;
     case 'I':
          cout<<"It is a vowel";
          break;
     case 'O':
           cout<<"It is a vowel";
           break;
     case 'U':
          cout<<"It is a vowel";
          break;
     
     default:
         cout<<"It is not a vowel";
        break;
     }
     return 0;
}