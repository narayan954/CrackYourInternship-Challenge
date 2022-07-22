//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int solve(int h,int m, int p, vector<vector<int>> &memo){
            if(h<=0 || m<=0)
                return -1;
            
            if(memo[h][m] != -1)
                return memo[h][m];
            
            int r1 = -1e6;
            int r2 = -1e6;
            int r3 = -1e6;
            
            if(p != 1)
                r1 = solve(h+3, m+2, 1, memo);
            if(p != 2)
                r2 = solve(h-5, m-10, 2, memo);
            if(p != 3)
                r3 = solve(h-20, m+5, 3, memo);                
                
            return memo[h][m] = max({r1, r2, r3})+1;
        }
            
        int maxLevel(int h,int m){
            vector<vector<int>> memo(2001, vector<int>(2001, -1));
            return solve(h, m, 0, memo);
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution a;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<a.maxLevel(h,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends
