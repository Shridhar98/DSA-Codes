#include<bits/stdc++.h>
using namespace std;

void breadth_first_search(int n,vector<int> adj[],vector<int> &bfs){
    int visited[n+1]={0};
    visited[1] = 1;
    // 1 indexed graph so start with node 1
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it:adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
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
    vector<int> bfs;
    //calling bf function
    breadth_first_search(n,adj,bfs);
    cout<<"The BFS traversal is: ";  
    //printing BFS traversed array
    for(auto it:bfs){
        cout<<it<<" ";
    }
    cout<<endl;
    

}