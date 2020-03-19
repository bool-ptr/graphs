#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int vertices,edges,u,v; //u and v are connected edges
    cout<<"enter the number of vertices and edges"<<endl;
    cin>>vertices>>edges;
    
    vector<int> adj[100];
 
    cout<<"enter enter the edges(u and v)"<<endl;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //printing the bi directional graph

    for(int i=0;i<vertices;i++){
        cout<<i;
        for(auto it:adj[i]){
            cout<<"->"<<it;
        }
        cout<<endl;
    }
    return 0;
}