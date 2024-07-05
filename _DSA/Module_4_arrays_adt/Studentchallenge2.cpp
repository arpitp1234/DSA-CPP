/*Student Challenge 2*/
/*Finding mulitple missing elment in the array*/

#include<iostream>
using namespace std;

int main(){
    int series[10]={6,7,8,9,12,13,14,17,18,19};
    int difference=series[0]-0;
    for(int i=0;i<10;i++){
        if(series[i]-i!=difference){
            cout<<"Missing element is:- "<<i+difference<<endl;
        }
        while(difference<series[i]-i){
            difference++;
            cout<<"Missing element is:- "<<i+difference<<endl;
            difference++;
        }
    }
    return 0;
}











































