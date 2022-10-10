//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void dfs(int i, int j,vector<vector<bool>> &world, vector<vector<bool>> &vis, int n,int m){
        if(i<0 or i>=n or j<0 or j>=m or vis[i][j] or !world[i][j]) return;
        
        vis[i][j]=true;
        
        dfs(i+1,j,world,vis,n,m);
        dfs(i-1,j,world,vis,n,m);
        dfs(i,j+1,world,vis,n,m);
        dfs(i,j-1,world,vis,n,m);
    }
    
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        vector<vector<bool>> world(n,vector<bool> (m,false));
        vector<int> ans;
        for(auto op:operators){
            world[op[0]][op[1]]=true;
            int count=0;
            vector<vector<bool>> vis(n,vector<bool>(m,false));
             for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(world[i][j] && !vis[i][j]){
                        dfs(i,j,world,vis,n,m);
                        count++;
                    }
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends
