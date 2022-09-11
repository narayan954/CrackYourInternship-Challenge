//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int solve(int i,int j, vector<vector<char>> &mat, string target,int idx){
        int found = 0;
        if(i>-1 && j>-1 && i<mat.size() && j<mat[0].size() && target[idx]==mat[i][j]){
            char temp = mat[i][j];
            mat[i][j] = '0';
            if(++idx==target.length()) found=1;
            else{
                found += solve(i+1,j,mat,target,idx);
                found += solve(i-1,j,mat,target,idx);
                found += solve(i,j+1,mat,target,idx);
                found += solve(i,j-1,mat,target,idx);
            }
            mat[i][j] = temp;
        }
        return found;
    }
    
    int findOccurrence(vector<vector<char> > &mat, string target){
        int  ans = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                ans += solve(i,j,mat,target,0);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends
