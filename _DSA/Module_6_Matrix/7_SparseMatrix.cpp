/*Matrices which have zero entries are called as sparse matrix*/

/*Matrices has presentation in rows and columns ,so it can presented in two dimesional array*/

    /*rows :-  1  2  3  4  5  6  7  8  9   
      1        0  0  0  0  0  0  0  0  0
      2        0  0  8  0  0  10 0  0  0
      3        0  0  0  0  0  0  0  0  0
      4        4  0  0  0  0  0  0  0  0
      5        0  0  0  0  0  0  0  0  0
      6        0  0  2  0  0  0  0  0  0
      7        0  0  0  6  0  0  0  0  0
      8        0  9  0  0  5  0  0  0  0
    */
/*The above matrix is of order 8*9 and is havind very few non zero element i.e only 8 non zero element are there*/

/*Mostly in statistical data or survey data ,data may be reprsented in form of matrix and there may 
be lot of zero values*/

/*If we are using sparse in our program ,then we are having lot of zeroes and then we are wasting lot 
of space and also processing time*/

/*To prevent above we should only store non zero element*/
/*
For storing non zero element they may be more than approach available here:- 

1)Coordinate list (3-column representation or 3 -tuple method)
2)Compressed sparse row
*/


/*1)Coordinate list (3-column representation or 3-tuple method)*/

/*
Every non zero entry of sparse matrix representd by three tuple
First tuple represetn row,second for column and third for value,here all element of matrix will come
sequentilly.It can be row major or column major 3-tuple presentation of sparse matrix
*/

/*1)Coordinate list(3-column representation or 3-tuple method)*/
/*
Every non zero entry of sparse matrix represented by three tuple

First represent row,second for column and third for value,here all element of matrix will come sequentially.
It can be row major or column major 3-tuple presentation of sparse matrix
*/

/*Let us take a matrix of 4*5*/
          /*
          M(4*5)= 0 -4 5  0  1
                  9  0 0  2  0
                  0  3 0  0  0
                  6  0 0  0  12

Now we have to represent the matrix of 3 tuple representation of sparse matrix

Here total number of rows is 4,number of column are 5 and non zero entries are 8 so sparse matrix will
be
            

        1)Its row major 3 tuple presentation so elment are coming sequentially on the basis of rows
          Suppose we want to represent column major 3 tuple sparse matrix ,then it will be

                   Rows   column    value
            M=      4      5          8
                    1      2         -4
                    1      3          5
                    1      5          1
                    2      1          9
                    2      4          2
                    3      2          3
                    4      1          6
                    4      5          12
         2)Suppose we want to reprsent column major 3-tuple sparse matrix,then it will be

                    column    row      value
           M=         5        4          8
                      1        2          9
                      1        4          6
                      2        1         -4
                      2        3          3
                      3        1          5
                      4        2          2
                      5        1          1
                      5        4          12

In two dimesional array when we stor data row by row in a cell,that is we store first row of the array
then second row of the array and then next and so such storage is called row major order.The other alternative
is store the array column by column , it is called column major order

*/





/*2)Compressed Sparse Row*/

          //  1   2   3  4  5  6  7  8  9
        // 1  0   0   0  0  0  0  0  3  0
        // 2  0   0   8  0  0  10 0  0  0
        // 3  0   0   0  0  0   0 0  0  0
        // 4  4   0   0  0  0   0 0  0  0
        // 5  0   0   0  0  0   0 0  0  0
        // 6  0   0   2  0  0   0 0  0  0
        // 7  0   0   0  6  0   0 0  0  0
        // 8  0   9   0  0  0   0 0  0  0
  
//IN this sparse matrix is reprsented uisng three ways

//1st Array : list of non zero element
         //A[3,8,10,4,2,6,9,5]
//2nd Array: 
        //IA [0,1,3,3,4,4,5,6,8]
//3rd Array
        // A[3,8,10,4,2,6,9,5]
  //Above hame jo 1st array banaay hai usi ke corresponding ham column number ko likh dekenge
  //Jaise Array A me 3 present uska column no 8 ,A me 8 present uska column n0 3 hai;

//IA hamara 0 se starte hoga aur IA 1 se start hoga

//=>sparse matrix jo hamane 8*9 ko banaya hai
// has
//total 8*9=72
/*
   if int is there
    (set it take 2 byte)
    total = 72*2=144 byte
    but in case of compressed sparse row

       A IA  IA
       8  9   9
  non zero
  element
    8+9+8=25

  if all are integer and take 2 byte
   total space =25*2=50 byte
  
So we say apporx 30 % space is reduced

*/

//2)Addition of tow sparse matrix in coordinate list representatiaon
  
        //A=     1  2  3  4  5  6
        //1      0  0  0  6  0  0
        //2      0  7  0  0  0  0
        //3      0  2  0  5  0  0
        //4      0  0  0  0  0  0
        //5      4  0  0  0  0  0


        //B=    // 1  2  3  4  5  6
        //1        0  0  0  0  0  0
        //2        0  3  0  0  5  0
        //3        0  2  0  5  0  0
        //4        0  0  0  0  0  0
        //5        8  0  0  0  0  0

  //A+B-------------------------------------------------------
     
        
          //C=    1  2  3  4  5  6
              //1 0  0  0  6  0  0
              //2 0  10 0  0  5  0
              //3 0  2  2  5  0  7
              //4 0  0  0  9  0  0
              //5 12 0  0  0  0  0
        //||

  //Mathematically ham tow matrice ko waise hi add karege like we usko add karte hai

  /*
        //0  1  2  3  4  5
        ____________________
        //5  1  2  3  3  5
  A=    //6  4  2  2  4  1
        //6  6  7  2  5  4
        ____________________

        //0  1  2  3  4  5  6
        ______________________
        //5  2  2  3  3  4  5
   B=   //6  2  5  3  6  4  1
        //6  3  5  2  7  9  8
        _______________________

   sum C   0  1  2  3  4  5  6  7  8  9
         _______________________________
           5  1  2  2  3  3  3  3  4  5
           6  4  2  5  2  3  4  4  6  4
           9  6  10 2  2  5  7  9  12 11

     3)Array representation of sparse matrix

               1  2  3  4  5
       A=   1  0  0  7  0  0
            2  2  0  0  5  0
            3  9  0  0  0  0
            4  0  0  0  0  4

              4*5
        //reprsenting above matrix
                   0  1  2  3  4  5
        row->  i   4  1  2  2  3  4
               j   5  3  1  4  1  5
               x   5  7  2  5  9  4
            

  */
/*Inputing sparse matrix and getting the original matrix*/

//#include<iostream>
//using namespace std;
//
//class Element{
//  public:
//  int i;
//  int j;
//  int x;
//};
//class Sparse{
//  private:
//  int m;
//  int n;
//  int num;
//  Element *ele;
//  public:
//  Sparse(){}
//  Sparse(int m,int n,int num){
//    this->m=m;
//    this->n=n;
//    this->num=num;
//    ele=new Element[this->num];
//  }
//  void read(){
//    cout<<"Enter row,column and element for "<<num<<" value:- ";
//    for(int i=0;i<num;i++){
//      cin>>ele[i].i>>ele[i].j>>ele[i].x;
//    }
//  }
//  void display(){
//    int k=0;
//    for(int i=1;i<=m;i++){
//      for(int j=1;j<=n;j++){
//        if(ele[k].i==i && ele[k].j==j){
//          cout<<ele[k++].x<<" ";
//        }else{
//          cout<<"0 ";
//        }
//      }
//      cout<<endl;
//    }
//  }
//  Sparse operator+ (Sparse &s){
//    int i,j,k;
//    if(m!=s.m || n!=s.n){
//      exit(0);
//    }
//    Sparse *sum=new Sparse(m,n,num+s.num);
//    i=j=k=0;
//    while(i<num && j<s.num){
//      if(ele[i].i<s.ele[j].i){
//        sum->ele[k++]=ele[i++];
//      }else if(ele[i].i>s.ele[j].i){
//        sum->ele[k++]=s.ele[j++];
//      }else{
//        if(ele[i].j<s.ele[j].j){
//           sum->ele[k++]=ele[i++];
//        }else if(ele[i].j>s.ele[j].j){
//            sum->ele[k++]=s.ele[j++];
//        }else{
//            sum->ele[k]=ele[i];
//            sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
//        }
//
//      }
//    }
//    for(int i=0;i<num;i++){
//      sum->ele[k++]=ele[i++];
//    }
//    for(int j=0;j<num;j++){
//      sum->ele[k++]=s.ele[j++];
//    }
//    return *sum;
//  }
//};
//int main(){
//  cout<<"Enter the first matrix :- \n";
//  Sparse s1(3,3,3);
//  s1.read();
//  cout<<"first matrix is:- \n";
//  s1.display();
//  cout<<"Enter the second matrix :- \n";
//  Sparse s2(3,3,3);
//  s2.read();
//  cout<<"second matrix is:- \n";
//  s2.display();
//  cout<<"sum of first and second matrix is:- \n";
//  Sparse sum=s1+s2;
//  sum.display();
//  return 0;
//}

//Method 2
/*
In above we have read and display function now where read function take value form keyboard and display function is displaying on the monitor
1.read function can be implemented using the extraction operator
2.display function can be implemented using the insertion operator

Instead of writing it read and display we will convert it not operator

*/
#include<iostream>
#include<process.h>
#include<stdlib.h>
#include<process.h>
using namespace std;

class Element{
  public:
  int i;
  int j;
  int x;
};

class Sparse{
  private:
  int m;
  int n;
  int num;
  Element *ele;
  public:
  Sparse(int m,int n,int num){
    this->m=m;
    this->n=n;
    this->num=num;
    ele=new Element[this->num];
  }
  //for add function we use operator overlaoding
  Sparse operator+(Sparse &s);
  //Above this is the signature of extarction operator i.e istream operator.Above excluding sparse and everything is the syntax.we cannot change anything
  friend istream & operator>>(istream &is,Sparse &s);
  //Above this is the signature of insertion operator i.e ostream operaotr.Above excluding sparse &s everything is the syntax.We cannot change anything
  friend ostream & operator<<(ostream &os,Sparse &s);
};

Sparse Sparse::operator+(Sparse &s){
  int i,j,k;
  if(m!=s.m || n!=s.n){
    exit(0);
  }
  Sparse *sum=new Sparse(m,n,num+s.num);
  i=j=k=0;
  while(i<num && j<s.num){
    if(ele[i].i<s.ele[j].i){
      sum->ele[k++]=ele[i++];
    }else if(ele[i].i>s.ele[j].i){
      sum->ele[k++]=s.ele[j++];
    }else{
      if(ele[i].j<s.ele[j].j){
        sum->ele[k++]=ele[i++];
      }else if(ele[i].j>s.ele[j].j){
        sum->ele[k++]=s.ele[j++];
      }else{
        sum->ele[k]=ele[i];
        sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
      }
    }
  }
  for(;i<num;i++){
    sum->ele[k++]=ele[i++];
  }
  for(;i<s.num;j++){
    sum->ele[k++]=ele[j++];
  }
  return *sum;
}

istream & operator>>(istream &is,Sparse &s){
  cout<<"Enter row,column and element:- \n";
  for(int i=0;i<s.num;i++){
    cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
  }
  return is;
}

ostream & operator<<(ostream &os,Sparse &s){
  int k=0;
  for(int i=1;i<=s.m;i++){
    for(int j=1;j<=s.n;j++){
       if(s.ele[k].i==i && s.ele[k].j==j){
        cout<<s.ele[k++].x<<" ";
       }else{
        cout<<"0 ";
       }
    }
    cout<<endl;
  }
  return os;
}
int main(){
  Sparse s1(3,3,3);
  Sparse s2(3,3,3);
  cout<<"Enter the first matrix:- ";
  cin>>s1;
  cout<<"Enter the second matrix:- ";
  cin>>s2;
  Sparse sum=s1+s2;
  cout<<"first matrix "<<endl<<s1;
  cout<<"Second matrix "<<endl<<s2;
  cout<<"Sum matrix "<<endl<<sum;
  return 0;
}