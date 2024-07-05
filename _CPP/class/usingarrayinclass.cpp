#include<iostream>
using namespace std;

class dukaan{
    private:
    int id[10];
    int price[10];
    int counter;
    public:
    void init(void){
        counter=1;
    }
    void setdata(){
        cout<<"For Product "<<counter<<" "<<endl;
        cout<<"Enter the id"<<counter<<":- ";
        cin>>id[counter];
        cout<<"Enter the price:- "<<counter<<":- ";
        cin>>price[counter];
        counter++;

    }
    void getdata(){
        for(int i=1;i<counter;i++){
            cout<<"Id is:- "<<id[i]<<endl;
            cout<<"Price is:-"<<price[i]<<endl;
        }
    }
};
int main(){
    dukaan d1;
    d1.init();
    d1.setdata();
    d1.setdata();
    d1.getdata();
    return 0;
}









