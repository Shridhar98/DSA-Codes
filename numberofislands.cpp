#include<bits/stdc++.h>
using namespace std;
void bfs(int row,int col,vector<vector<int>> &visited,vector<vector<int>> &grid){
    visited[row][col] = 1;
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> q;
    q.push({row,col});
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for(int delrow = -1;delrow<=1;delrow++){
            for(int delcol = -1;delcol<=1; delcol++){
                int nrow= row + delrow;
                int ncol = col + delcol;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !visited[nrow][ncol]){
                    visited[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}


int main(){
    cout<<"Enter the rows and column of the grid: ";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid;
    vector<vector<int>> visited(n,vector<int>(m,0));
    cout<<"Enter the grid matrix: "<<endl;
    for(int i=0;i<n;i++){
        vector<int> an;
        for(int j=0;j<m;j++){
            int h;
            cin>>h;
            an.push_back(h);    
        }
        grid.push_back(an);
        an.clear();
    }
    int count=0;
    for(int row = 0;row<n;row++){
        for(int col =0 ;col<m;col++){
            if(!visited[row][col] && grid[row][col]==1 ){
                count++;
                bfs(row,col,visited,grid);
            }
        }
    }
    cout<<"The number of islands in the grid are "<<count<<endl;
    return 0;
   
}