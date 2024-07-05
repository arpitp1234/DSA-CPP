#include<iostream>
using namespace std;

int main(){
    int n;
    for(int i=1;i<=15;i++){
        for(int j=1;j<=15;j++){
            if(i<7 && j<7){
               if(i%2 != 0 && j%2 != 0){
                   cout<<" *";
               }else if(i%2 ==0 && j%2==0){
                   cout<<" *";
               }else{
                   cout<<"  ";
               }
            }else{
                  cout<<" =";
            }
        }
        cout<<endl;
    }
    return 0;
}
