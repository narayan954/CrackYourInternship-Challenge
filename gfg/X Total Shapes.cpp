//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    int vis[100][100]={{0}};
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    int n1,m1;
    
    bool val(int r,int c){
        if(r>=n1 || r<0 || c>=m1 || c<0) return false;
        else return true;
    }
    
    void dfs(int r,int c){
        vis[r][c]=1;
        for(int i=0;i<4;i++){
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(vis[nr][nc]==0 && val(nr,nc)==true) dfs(nr,nc);
        }
    }
    
    int xShape(vector<vector<char>>& grid) {
        // Code here
        int count=0;
        int r=grid.size();
        int c=grid[0].size();
        n1=r;
        m1=c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]!='X') vis[i][j]=1;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j]){
                    dfs(i,j);
                    count++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends
