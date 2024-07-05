/*
The useful classes for working in cpp are:- 
1.fstreambase---->This is a base class
2.ifstream---->This is a derived class from fstream
3.ofstream---->This is  derived class from fstream.
*/


/*
In order to work file in c++ you wil have to open it ,there are two ways to open a file.
1.using the constructor
2.using the member function open() of the class

The header file that is used is #include<fstream>
*/

/*1.Using the constructor*/


/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str1="arpit is a good boy and he loves to eat apple and banana so we are not going for it";
    string str2,str3;

    //opening a file using constructor and writing it
    ofstream write("sample1.txt");
    

    //write operation
    write<<str1;

    //Opening a file using constructor and reading it;
    ifstream read("sample2.txt");
    //By using this only one word of file ,we can read but for reading every line we have to use getline function again and again
    read>>str2;
    cout<<str2;

    ifstream reads("sample3.txt");
    getline(reads,str3); //If there is any second line then again we have to use getline function
    cout<<str3;
    //in place of read and write out we can write anything,it will not show error.
    return 0;
}
*/





/*Here we are going to use the second method to read and write the file*/
/*
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("arpit.txt");
    out<<"This is going to red flag and we are here to do something great until this"<<"It will the great task and we are going to chill and have a lot of fun";
    out.close();
   
    ifstream in;
    string st3;
    in.open("arpitpandey.txt");
    while(in.eof()==0){
       getline(in,st3);
       cout<<st3;
    }
    return 0;
}


*/









