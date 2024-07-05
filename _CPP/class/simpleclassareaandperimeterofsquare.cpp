#include<iostream>
using namespace std;

class Square{
    private:
    int length;
    public:
    Square(int l){
        length=l;
    }
    void area();
    void perimeter();
};
 void Square:: area(){
    cout<<"The area of the square is:- "<<length*length<<endl;
}
 void Square::perimeter(){
    cout<<"The perimeter of the square is:- "<<4*length<<endl;
}

int main(){
    Square s(5);
    s.area();
    s.perimeter();
    return 0;
}