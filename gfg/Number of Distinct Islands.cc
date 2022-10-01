//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    public:
    vector<vector<int>> vis;
    
    void solve(int i,int j,vector<vector<int>> &grid,int m, int n,vector<pair<int,int>>&v){
        if (i<0 || i>=m || j<0 || j>=n || grid[i][j]==0 || vis[i][j]) return;
        
        v.push_back({i,j});
        vis[i][j]=1;
        
        solve(i,j+1,grid,m,n,v);
        solve(i,j-1,grid,m,n,v);
        solve(i+1,j,grid,m,n,v);
        solve(i-1,j,grid,m,n,v);
    }
    
    int countDistinctIslands(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        vis.resize(m, vector<int>(n,0));
        set<vector<pair<int,int>>>s;
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if(!vis[r][c] && grid[r][c]==1){
                    vector<pair<int,int>>v;
                    solve(r,c,grid,m,n,v);
                    auto t=v[0];
                    for(auto &it:v){
                        it.first-=t.first;
                        it.second-=t.second;
                    }
                    if(s.find(v)==s.end()){
                        s.insert(v);
                    }
                }
            }
        }
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
