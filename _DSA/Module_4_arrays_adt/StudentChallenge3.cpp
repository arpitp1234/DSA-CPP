/*Student Challenge:- 3*/
/*Find the missing element if it is unsorted array*/

#include<iostream>
using namespace std;

int main(){
    int element[10]={3,7,4,9,12,6,1,11,2,10};
    //Step1:Find the lowest element in the array
    int lowest=1;
    //Step2:Find the highest element in the array
    int highest=12;
    //Step3:Find the no of elemnet
    int n=10;
    //Step4:Now we will take an array of highest element in array
    int Hash[12]={0};
    for(int i=0;i<=n;i++){
        Hash[element[i]]++;
    }
    for(int i=lowest-1;i<=highest;i++){
        if(Hash[i]==0){
            cout<<"Missing element is:- "<<i<<endl;
        }
    }
    return 0;
}





































































