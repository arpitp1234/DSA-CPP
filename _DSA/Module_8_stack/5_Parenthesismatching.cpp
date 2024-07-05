/*Parenthesis Matching*/
/*
        ((a+b)*(c-d))

so,paranthesis matching is application of stack

    ((a+b)*(c-d))

there is bracket called parenthsis that's why it is called as parenthesis;

*we have to finde whether paranthesis are balance or not means for every openeing paranthesis there must be closing paraentheiss
or not ,for this we will be using a stack

so,for checking this is a stack can be used;

Jab hame opening bracket ya closing brackedt milega tabhi ham respond karege aur stack me dalenge varna ham move on karege

aur jab hame closing braket meile toh pop out kar do ,ek bracket form stack,hame closing bracket ko push nahi karna hai

Jab expressing end par jayenga ,agar stack me koi paraethesis bachega toh expression ki paraethesis matching nahi hogi

         opening bracket=>push in stack
         closing brakced=>pop a bracket from stack.

=>(a +   )b (*c -d)

This is not the proper paranthesisation.Paranthessi is done upon operator for including the operands belong to that operator


At above expressing proper paranthesis nahi hai lekin parantheisis matching karege toh hame stack me kuch nahi milega

___________
conclusion:- 

so ,we conclude this procedure does not check whether parenthesis are properly given or not,it will check whether number of paranthesis
are matching for every opening bracket there is closing bracket.
*/

/*Program for paranthesis matching*/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
        cout<<"stack is full";
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
char pop(){
    struct Node *t;
    char x=-1;
    if(top==NULL){
        cout<<"Stack is empty";
    }else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
}
void Display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        cout<<p->data;
        p=p->next;
    }
    cout<<endl;
}
int isBalanced(char *exp){
    int i;
    for(int i=0;exp[i]!= '\0';i++){
        if(exp[i]=='('){
            push(exp[i]);
        }else if(exp[i]==')'){
            if(top==NULL){
                return 0;
            }
            pop();
        }
    }
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char *exp="((a+b)*(c-d))";
    if(isBalanced(exp)){
        cout<<"Expression is Balanced";
    }else{
        cout<<"Expression is not Balanced";
    }
    return 0;
}

/*More on paranthesis matching*/
/*
{([a+b]*[c-d])/e}

abhi tak ham small bracket se deal kar rahe the ab big brackedt and curly bracket bhi aa gya.


To check bracket is balance we can use the stack

what we do different from previous program

     if(exp[i]=="{" || exp[i]=='(' || exp[i]=='['){
        push(&st,exp[i]);
     }
     if(exp[i]=='}' || exp[i]==')' || exp[i]=='J'){
        pop(&st,exp[i])
     }
*/