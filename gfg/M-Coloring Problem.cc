//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
public:

    bool ispossible(int node,vector<int> colours,bool graph[101][101],int n,int colour){
        for(int k=0;k<n;k++){
            if(k!=node && graph[k][node]==1 && colours[k]==colour) return false;
        }
        return true;
    }
    
    bool solve(int node,vector<int> colours,int m,int n,bool graph[101][101]){
        if(node==n) return true;
        for(int colour=1;colour<=m;colour++){
            if(ispossible(node,colours,graph,n,colour)){
                colours[node] = colour;
                if(solve(node+1,colours,m,n,graph)) return true;
                colours[node] = 0;
            }
        }
        return false;
    }
    
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int> colours(n,0);
        return solve(0,colours,m,n,graph);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
