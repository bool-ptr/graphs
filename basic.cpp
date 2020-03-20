#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[],int ver,int edgeTo){

    adj[ver].push_back(edgeTo);
    adj[edgeTo].push_back(ver);
}


void printGraph(vector<int> adj[],int edgeLimit){
    int j;
    for(int i=0;i<edgeLimit;i++){
        cout<<"adjacency list for "<<i<<" :";
        for(auto j:adj[i]){
            cout<<"->"<<j;
        }
        cout<<endl;
    }
}
void makeGraph(){
    int edgeLimit,ver,edgeTo;
    cout<<"enter the number of edges"<<endl;
    cin>>edgeLimit;
      vector<int> adj[100];
    cout<<"now, enter the vertex, 'vertex to which it is connected' pair"<<endl;

    for(int i=0;i<edgeLimit;i++){
        cin>>ver>>edgeTo;
        addEdge(adj,ver,edgeTo);
    }
    printGraph(adj,edgeLimit);
}
int main(){
    makeGraph();
    return 0;
}