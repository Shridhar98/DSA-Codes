#include<bits/stdc++.h>
using namespace std;

void depth_first_search(int node,vector<int> adj[],int visited[],vector<int> &dfs){
    visited[node] = 1;
    dfs.push_back(node);
    //traversing neighbours for visited node
    for(auto it:adj[node]){
        if(!visited[it]){
            depth_first_search(it,adj,visited,dfs);
        }
    }
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dfs;
    int visited[n+1] = {0};//making all elements of array equal to 0

    //1 indexed graph so starting with node 1
    int start = 1;

    //calling the dfs function from main function
    depth_first_search(start,adj,visited,dfs);
    
    //printing dfs traversed array after recursion 
    cout<<"DFS for the given graph is: ";
    for(auto it:dfs){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}