/*
A list is a bidirectional storage of element
1.It give faster insertion and deletion operation
2.It access to random element to slow
*/


/*
What make a list different from an array
An array stores the elemnet in a contiguous manner in which insertion the some element calls for a shift of other element which is time taking .But it is a list we can simpley
change the address the pointer in pointing to
*/

/*
We define a list iterator using this syntax
list<int> :: iterator it;

*/

#include<iostream>
#include<list>
using namespace std;


void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
}
int main(){
    list<int> list1;
    list1.push_back(5);
    list1.push_back(15);
    list1.push_back(17);
    list1.push_back(19);
    display(list1);

    list<int> list2;
    list2.push_back(12);
    list2.push_back(13);
    list2.push_back(17);
    list2.push_back(14);
    display(list2);
    return 0;
}
























