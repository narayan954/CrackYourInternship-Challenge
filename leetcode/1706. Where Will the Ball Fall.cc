class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j){
        if (i==grid.size()) return j;
        int next = j + grid[i][j];
        if (next<0 or next==grid[0].size() or grid[i][next]!=grid[i][j]) return -1;
        return dfs(grid,i+1,next);    
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans;
        for(int i=0;i<grid[0].size();i++){
            ans.push_back(dfs(grid,0,i));
        }
        return ans;
    }
};
