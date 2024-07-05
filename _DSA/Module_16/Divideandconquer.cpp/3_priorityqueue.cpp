/*WAP a program for optimal Merge pattern*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int optimalmerge(int ch[],int size){
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<size;i++){
        q.push(ch[i]);
    }
    int count=0;
    while(q.size()>1){
        int left=q.top();
        q.pop();
        int right=q.top();
        q.pop();
        int parent=(left+right);
        count+=parent;
        q.push(parent);
    }
    return count;
}
int main(){
    int ch[3]={10,20,30};
    int size=sizeof(ch)/sizeof(ch[0]);
    int c=optimalmerge(ch,size);
    cout<<c;
    return 0;
}

