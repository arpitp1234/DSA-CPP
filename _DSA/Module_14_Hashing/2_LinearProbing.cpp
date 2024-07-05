/*
Linear Probing

=>This come under closed hashing.

    Here we will be using modify hash function

             h(x)=(h(x)+f(i))%10;

             where f(i)=i;
             i=0,1,2,3;

=>In linear probing where there is a collosion try to store element to next free space.

=>Linar Probing method is time taking ,It is not constant more than the constant;

=>Take a hash function,get the index,then go on searching linearly until key is found or you got a free space.

=>Linear Probing me yah hai ki agar 45 aur 25 h(x)%10 hai ki wah wahi 5 index par rahega aur 25 ko agla jo free space hoga array
me waha store karege.

__________________________________________________________________________________________________________________________________________________


Analysis:-

Analysis of hashing is done on loading factor is not on basis no of element.

                  loading factor l=n/size;

        in above example n=9, size=10;
              
        loadingfactor=>    L=9/10;=0.9;
    
    In linear probing laoding factor we will always less than 0.5
                 
                 L<=0.5;

        iska matlab agar has table ka size 10 hai to hame more than 5 keys ko nahi barna hoga.


Above example explanation ke liye ham 9 key liya kyoki hash table ka size 10 toh 5 key tak hona chachiye.


So average successful search for linear probing:-

                        t=1/L ln(1/(1-L));(predefined formula)

        Avg successful search
                       
                          t=1/(1-L);  (predefined formula);

Drawback of linear probing :

   =>You have to keep half of hash table vacant;
   =>Lot of key accumulation at one place forming a cluster which is called as primary cluster.
   =>So,linear probing may result in formation of primary cluster.


Delete:-

Use hash function,search for particular index then start search  if found then delete it;
ek bar delete ho jaye,toh fir se bache sare keys ko hastable se nikalo aur phir se mapping karo.This is called rehashing,yah cheez lot of 
effort require karege that's why we do not select delete.

=>Rehashing is not suggested as it is time consuming.
*/



#include<stdio.h>
#define size 10

int hash(int key){
    return key %size;
}

int probe(int H[],int key){
    int index=hash(key);
    int i=0;
    while(H[(index+i)%size]!=0){
        i++;
    }
    return (index+i)%size;
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
    while(H[(index+i)%size]!=key){
        i++;
    }
    return (index+i)%size;
}

int main(){
    int HT[10]={0};

    Insert(HT,12);
    Insert(HT,25);
    Insert(HT,35);
    Insert(HT,26);

    printf("key found at:- %d \n",Search(HT,26));
    return 0;
    
}