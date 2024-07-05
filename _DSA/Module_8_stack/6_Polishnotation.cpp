/*
Polishnotation

The process of writing the operator in an expression either befor their operands or after them is called the polish notation,it
discoverer was polish Mathematician Jan Lucksiewichz


The fundametal property of polish notation is that the order in which the operator are to be performed is completely determined
by the position of the operator and operand in the expression

The polish notation are classified in three categories these are infix,prefix and postfix

The three notation for writing an expression

1)Infix:
         operand  operator   operand
          A          +          B

2)Prefix
        operator  operand   operand
        +          A        B
3)Postfix expression

       operand operand operator
                           means a & b are added
        
        eg AB+

Infix is commonly used,in mathematic we follow infix

In computer science apart from infix we have introduce two or method for writign an expression i.e prefix and postfix



Why we need prefix and postfix if we are using infix

         8 +  3 *(9-6)/4 + 6/2
           
Bodmas se ham above expression ko solve kar sakte hai

Toh above expression ko solve karne ke liye hame isse multiple time scan karna padega

Toh above expression ko solve karne ke liye hame is multiple time scan karn padega pehle 1 se 2 par jao ,phir 2 se 3 par jao
phir 4  par jao,phir 5 and then 6,toh hame program likhne me dikkat hogi kyoki yeh sab randomly ho raha hai and isme koi pattern
nhi hai

Toh agar program bhi likhege toh hame highest precendence ke liye search karn padega joki bahut time consuming hai


=>so infix me single scan me expression ko evaluate karna it is not possible toh ham is cheez ko solve karne ke liye ham postfix form
ka use karege

Toh jab ham infix ko postfix me yah prefix me likhege toh hame use single scan me solve kar lege.

Rules to remember during conversion process that operation with high precedance are converted first

1)Bracket or parenthesis
2)Exponentiation
3)Multiplication or division or modulo operator
4)Addition or subtraction
*/

/*Converting infix to postfix expression and evaluation postfix expression*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("Stack is full \n");
    }else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop(){
    struct Node *t;
    int x=-1;
    if(top==NULL){
        printf("Stack is empty");
    }else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void Display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
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

int precendence(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='/' || x=='*'){
        return 2;
    }
    return 0;
}
int isoperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0;
    }else{
        return 1;
    }
}
char *IntoPost(char *infix){
    int i=0,j=0;
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(int));
    while(infix[i]!= '\0'){
        if(isoperand(infix[i])){
            postfix[j++]=infix[i++];
        }else{
            if(precendence(infix[i])>precendence(top->data)){
                push(infix[i++]);
            }else{
                postfix[j++]=pop();
            }
        }
    }
    while(top!=NULL){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int Eval(char *postfix){
    int i=0;
    int x1,x2,r;
    for(int i=0;postfix[i]!= '\0';i++){
        if(isoperand(postfix[i])){
            push(postfix[i]-'0');
        }else{
            x2=pop();
            x1=pop();
            switch (postfix[i])
            {
            case '+':
                r=x1+x2;
                break;
            case '*':
               r=x1*x2;
               break;
            case '-':
               r=x1-x2;
               break;
            case '/':
               r=x1/x2;
               break;
            }
            push(r);
        }
    }
    return top->data;
}
int main(){
    char *postfix="234 *+ 82 /-";
    printf("%d ",Eval(postfix));
    return 0;
}


















