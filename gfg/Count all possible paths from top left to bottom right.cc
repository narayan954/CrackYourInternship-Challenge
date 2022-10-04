//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define mod 1000000007

class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if (i==1 and j==1 )dp[i][j]=1;
                else dp[i][j] = (dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
            }
        }
        return dp[m][n]%mod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
