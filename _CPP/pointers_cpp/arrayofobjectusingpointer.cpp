#include<iostream>
using namespace std;

class Product{
    private:
    int id;
    int price;
    public:
    void setdata(int a,int b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"The id is:- "<<id<<endl;
        cout<<"The price is:- "<<price<<endl;
    }
};

int main(){
    Product *ptr=new Product[2];
    Product *tempptr;
    tempptr=ptr;
    int p,q;
    for(int i=0;i<2;i++){
       cout<<"For Product "<<i+1<<endl;
       cout<<"Enter the id:- ";
       cin>>p;
       cout<<endl;
       cout<<"Enter the price:- ";
       cin>>q;
       ptr->setdata(p,q); 
       ptr++;
    }
    cout<<endl;
    cout<<"The inputed value are:- \n";
    for(int i=0;i<2;i++){
        cout<<"For Product"<<i+1<<endl;
        tempptr->getdata();
        tempptr++;
    }
    return 0;
}