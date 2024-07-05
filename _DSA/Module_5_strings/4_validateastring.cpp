/*Here we are going to check validation of string*/

//We have to mention whether string is validate or not

//=>When we write any password then it comes password is invalid ,valid password is requirre

//=>Valid password means only alphabet and number are require and special character are not require


//if there is any special character then it will be a invalid string


#include<iostream>
using namespace std;

int validate(char *name){
    int i;
    for(int i=0;name[i]!= '\0';i++){
        if(!(name[i]>=65 && name[i]<=97) && !(name[i]>=97 && name[i]<122) && !(name[i]>=48 && name[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    char *name="Ani321";
    if(validate(name)){
        cout<<"valid string";
    }else{
        cout<<"Invalid string";
    }
    return 0;
}




