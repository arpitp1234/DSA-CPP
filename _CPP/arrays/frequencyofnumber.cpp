/*So we have to find frequency of given number*/

#include<iostream>
using namespace std;

int main(){
    int arr[10]={91,93,94,95,93,96,92,97,99,90};
    int word=90;
    int freq=0;
    for(int word=90;word<=100;word++){
        for(int i=0;i<10;i++){
            if(word==arr[i]){
                freq=freq+1;
            }
        }
     cout<<word<<" occur times "<<freq<<" "<<endl;
     freq=0;
    }
  return 0;
}