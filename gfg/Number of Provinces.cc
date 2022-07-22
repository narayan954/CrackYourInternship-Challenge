//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        int visited[V] = {0};
        int count = 0;
        for(int i=0;i<V;i++){
            if (!visited[i]){
                count++;
                Solution::dfs(i,visited,adj,V);
            }
        }
        return count;
    }
    void dfs(int u, int visited[], vector<vector<int>> adj, int V){
        visited[u] = 1;
        for(int i=0;i<V;i++){
            if (adj[u][i] && !visited[i]){
                visited[i] = 1;
                Solution::dfs(i,visited,adj,V);
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends
