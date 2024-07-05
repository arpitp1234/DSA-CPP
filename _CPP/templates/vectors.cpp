/*Vector is the container of the changeable size.It is built 
class which several method which we can use to make our work 
easy*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element,size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0;i<=size;i++){
        cout<<"Enter the element that you want in the stack";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int> :: iterator it;
    vec1.insert(it+1,5,566);
    display(vec1);
    vector<char> vec2(4);
    vector<char> vec4(6,3);
    return 0;
}













































































