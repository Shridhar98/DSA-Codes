#include<bits/stdc++.h>
using namespace std;
int main(){
    //matrix storing method
    int n,m;
    cin>>n>>m;
    int mat[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //others making equal to 0
        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    //list stroring method
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //if its a directed graph then we have to take only the first
        adj[u].push_back(v);

        //if its a undirected graph we have to take both the nodes vice versa
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    //weighted graph storing matrix method
    int n,m;
    cin>>n>>m;
    int adj[n+1][n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u][v] = w;
        //making equal to weight of the particular edge 
        adj[v][u] = w;

    }

    //weighted graph list method storing 
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    
}