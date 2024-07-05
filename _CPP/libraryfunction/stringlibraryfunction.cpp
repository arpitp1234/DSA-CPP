/*Here we are going to discuss different function of stirng function*/


//////////////////////////////////////Strlen function:- For calculation length of string////////////////////////////////////////////////////////////////

/*
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[50];
    cout<<"Enter the character:- ";
    cin>>str;
    int c=strlen(str);
    cout<<"The length of the string is :- "<<c<<endl;
    return 0;
}
*/


///////////////////////////////////////////Strcmp function:- For comparing two string///////////////////////////////////////////////////////////////////////


/*Comparison  of two string*/
/*#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str1[20],str2[20];
    cout<<"Enter the two string:- ";
    gets(str1);
    gets(str2);
    if(strcmp(str1,str2)==0){
        cout<<"String are same \n";
    }else{
        cout<<"String are not same \n";
    }
    return 0;
}

*/


///////////////////////////////////////////////////////////////Strcpy////////////////////////////////////////////////////////////////////////////////////////

/*

#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char str1[10],str2[20];
    cout<<"Enter the string1:- ";
    cin>>str1;
    cout<<"Enter the string2:- ";
    cin>>str2;
    cout<<"First string:- "<<str1<<endl;
    cout<<"Second string:- "<<str2<<endl;
    strcpy(str1,"Del");
    strcpy(str2,"Ban");
    cout<<"First String:- "<<str1<<endl;
    cout<<"Seocnd string:- "<<str2<<endl;
    return 0;
}
*/



///////////////////////////////////////////////////////////Strrev function//////////////////////////////////////////////////////////////////////////////////
/*
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str2[20];
    cout<<"Enter string:- ";
    gets(str2);
    cout<<"The string after reversing is:- ";
    strrev(str2);
    return 0;
}
*/


////////////////////////////////////////////////////////////Strupr funciton//////////////////////////////////////////////////////////////////////////////////////

/*The strupr(string) functio return string in uppercase*/
/*
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char str[20];
    cout<<"Enter string:- ";
    gets(str);
    cout<<"String is: %s",str;
    printf("\n upperstring is: %s",strupr(str));
    return 0;
}
*/

/*The strlwr() function return string character in lowercase*/

/*
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[20];
    cout<<"Enter string:- ";
    gets(str);
    strlwr(str);
    cout<<"The stirng is:- "<<str<<endl;
    return 0;
}
*/













