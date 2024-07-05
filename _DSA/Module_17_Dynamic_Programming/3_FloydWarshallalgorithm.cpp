/*
In dijkstra we find shortest from single node to another node
In flyod Warshall we find distance from multiple node to multiple
other nodes.
*/

#include<iostream>
#include<process.h>
using namespace std;

#define V 4

#define INF 99999

void printSolution(int dist[][V]);

void flyodWarshall(int dist[][V]){
    int i,j,k;
    for(k=0;k<V;k++){
        for(i=0;i<V;i++){
            for(j=0;j<V;j++){
                if(dist[i][j]>(dist[i][k]+dist[k][j]) && dist[k][j] !=INF && dist[i][j]!=INF){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
 printSolution(dist);
}

void printSolution(int dist[][V]){
    cout<<"\n Shortest distance between every pari of vertices:- \n";
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j]==INF){
                cout<<"INF  "<<" ";
            }else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int graph[V][V]={
       {0,8,INF,1},
       {INF,0,1,INF},
       {4,INF,0,INF},
       {INF,2,9,0}
    };
    flyodWarshall(graph);
    return 0;
}