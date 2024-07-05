/*Quadratic probing

                      h(x)=(h(x)+f(i))%10


                      where f(i)=i*i;  <=(Difference between linear probing and quadratic probing);


                    Toh yaha par collosion hone par ham elemnet ko little distance par store karege.


    Analysis for quadratic probing

             
             Avg successful search

                         t= -loge(1-L)/L

             Avg unsuccessful search

                         t=1/(1-L);
             
             
  */

            
//Quadratic probing is same as linear probing only there is minute difference in formula.


#include<stdio.h>
#define SIZE 10

int hash(int key){
    return key% SIZE;
}

int probe(int H[],int key){
    int index=hash(key);
    int i=0;
    while(H[(index+i*i)%SIZE]!=0){
        i++;
    }
    return (index+i*i)%SIZE;
}

void Insert(int H[],int key){
    int index=hash(key);
    if(H[index]!=0){
        index=probe(H,key);
    }
    H[index]=key;
}

int Search(int H[],int key){
    int index=hash(key);
    int i=0;
    while(H[(index+i*i)%SIZE] !=key){
        i++;
    }
    return (index+i*i)%SIZE;
}

int main(){
    int HT[10]={0};
    Insert(HT,12);
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,45);
    Insert(HT,26);
    printf("Key found at %d \n",Search(HT,45));
    return 0;
}