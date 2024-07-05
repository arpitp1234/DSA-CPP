#include<iostream>
using namespace std;

int main(){
    float bs,da,ta,hra,gs;
    printf("Enter the basic salary:-");
    scanf("%f",&bs);
    da=0.10*bs;
    ta=0.12*bs;
    hra=0.10*bs;
    gs=bs+da+ta+hra;
    printf("The gross salary is %f",gs);
    return 0;
}