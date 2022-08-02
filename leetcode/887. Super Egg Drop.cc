class Solution {
public:
    int solve(int k, int n,vector<vector<int>>&dp){
        if(k==0) return INT_MAX;
        if(k==1) return n;
        if(n==1 || n==0) return n;
        if(dp[k][n]!=-1) return dp[k][n];
        
//         int ans = INT_MAX;
//         for(int i=1;i<=n;i++){
//             ans = min(ans,max(solve(k-1,i-1,dp),solve(k,n-i,dp)));
//         }
        
//         return dp[k][n] = ans+1;
//     }
        int mn = INT_MAX;
        int l = 1;
        int r = n;
        while(l<=r){
            int mid = l+ (r-l) /2;
            int left = solve(k-1,mid-1,dp);
            int right = solve(k,n-mid,dp);
            int temp = 1 + max(left,right);
            if (left<right)  
                l=mid+1;
            else
                r=mid-1;
            mn = min(mn,temp);
   
        }
        return dp[k][n] = mn;
    }
    
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        return solve(k,n,dp);
    }
};
