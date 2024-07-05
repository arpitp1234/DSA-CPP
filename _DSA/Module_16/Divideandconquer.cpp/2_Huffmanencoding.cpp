/*Program for hauffman encoding*/

#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;


struct Node{
    int freq;
    char data;
    struct Node *left;
    struct Node *right;

    Node(int val,char datas){
        freq=val;
        data=datas;
        left=NULL;
        right=NULL;
    }
};

struct cmp{
    bool operator()(Node *l,Node *r){
        return (l->freq>r->freq);
    }
};

void preorder(Node *root,string s,map<string,char> &ans){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        ans.insert({s,root->data});
    }
    preorder(root->left,s+"0",ans);
    preorder(root->right,s+"1",ans);
}

map<string,char> huffmanCode(char S[],vector<int> f,int n){
    priority_queue<Node *,vector<Node *>,cmp> mh;
    for(int i=0;i<n;i++){
        Node *temp=new Node(f[i],S[i]);
        mh.push(temp);
    }
    while (mh.size()!=1)
    {
      Node *left=mh.top();
      mh.pop();
      Node *right=mh.top();
      mh.pop();
      Node *parent=new Node(left->freq+right->freq,left->data+right->data);
      parent->left=left;
      parent->right=right;
      mh.push(parent);
    }

    Node *root=mh.top();
    mh.pop();
    map<string,char> ans;
    preorder(root," ",ans);
    return ans;   
}

int main(){
    char data[]={'a','b','c','d','e','f'};
    int freq[]={5,9,12,13,16,45};
    vector<int> f;
    f.push_back(5);
    f.push_back(9);
    f.push_back(12);
    f.push_back(13);
    f.push_back(16);
    f.push_back(45);
    int size=sizeof(data)/sizeof(data[0]);
    map<string,char> l=huffmanCode(data,f,size);
    for(auto itr=l.begin();itr != l.end();++itr){
        cout<<itr->second<<"= "<<itr->first<<" "<<endl;
    }
    return 0;
}









