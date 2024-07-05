/*Polynomial in CPP*/

#include<iostream>
#include<math.h>
using namespace std;

class Term{
    public:
    int coeff;
    int exp;
};

class Polynomial{
    private:
    int n;
    Term *terms;
    public:
    Polynomial(){}
    Polynomial(int a){
        n=a;
        terms=new Term[n*sizeof(int)];
    }
    void read(){
        cout<<"Enter the terms  exponent and coefficient /n"<<endl;
        for(int i=0;i<n;i++){
            cin>>terms[i].exp>>terms[i].coeff;
        }
    }
    void display(){
        int i;
        for(int i=0;i<n;i++){
            cout<<terms[i].coeff<<" x"<<terms[i].exp<<" ";
        }
        cout<<endl;
    }
    Polynomial operator+(Polynomial *p){
        int i,j,k;
        Polynomial *sum;
        sum=new Polynomial;
        sum->terms=new Term[(n+p->n)*sizeof(Term)];
        i=j=k=0;
        while(i<n && j<p->n){
            if(terms[i].exp>p->terms[j].exp){
                sum->terms[k++]=terms[i++];
            }else if(terms[i].exp<p->terms[j].exp){
                sum->terms[k++]=p->terms[j++];
            }else{
                sum->terms[k].exp=terms[i].exp;
                sum->terms[k++].coeff=terms[i++].coeff+p->terms[j++].coeff;
            }
        }
    
    for(;i<n;i++){
        sum->terms[k++]=terms[i++];
    }
    for(;j<p->n;j++){
        sum->terms[k++]=p->terms[j++];
    }
    sum->n=k;
    return *sum;
    }
    int Evaluation(){
        int sum=0;
        int x;
        cout<<"Enter the vlaue of x for which you wnant to evaluate the expression:- ";
        cin>>x;
        for(int i=0;i<n;i++){
            sum=terms[i].coeff*pow(x,terms[i].exp);
        }
        cout<<"After evaluation the expression is:- "<<sum;
    }
};
int main(){
    Polynomial p1(3),p2(3);
    cout<<"creating first polynomial:- \n";
    p1.read();
    cout<<"creating the second polynomial:- \n";
    p2.read();
    cout<<"first polynomial:- \n";
    p1.display();
    cout<<"second polynomial:- \n";
    p2.display();
    cout<<"The sum of the first and second polynomail is:- ";
    Polynomial sum=p1.operator+(&p2);
    sum.display();
    sum.Evaluation();
    return 0;
}
