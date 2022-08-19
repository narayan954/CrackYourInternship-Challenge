//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int N,M;
    //Function to find unit area of the largest region of 1s.
    int dfs(vector<vector<int>>& grid,int i,int j){
        int temp_area = 0;
        if (i >= 0 && i < N && j >=0 && j < M && (grid[i][j]==1)){
            grid[i][j]=2;
            temp_area = 1;
            temp_area += dfs(grid,i-1,j-1);
            temp_area += dfs(grid,i-1,j);
            temp_area += dfs(grid,i-1,j+1);
            temp_area += dfs(grid,i,j-1);
            temp_area += dfs(grid,i,j+1);
            temp_area += dfs(grid,i+1,j-1);
            temp_area += dfs(grid,i+1,j);
            temp_area += dfs(grid,i+1,j+1);
        }
        return temp_area;
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        N = grid.size();
        M = grid[0].size();
        int largest = 0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(grid[i][j]==1){
                    largest = max(largest,dfs(grid,i,j));
                }
            }
        }
        return largest;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
