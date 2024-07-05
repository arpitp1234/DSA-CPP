/*Array of structure:- */

#include<iostream>
using namespace std;

struct product{
    int price;
    int discount;
};
int main(){
    struct product p[2];
    for(int i=0;i<2;i++){
        cout<<"Enter price:- ";
        cin>>p[i].price;
        cout<<"Enter discount:- ";
        cin>>p[i].discount;
    }
    for(int i=0;i<2;i++){
        cout<<"product"<<i<<"="<<p[i].price<<endl;
        cout<<"product"<<i<<" ="<<p[i].discount<<endl;
    }
    return 0;
}















