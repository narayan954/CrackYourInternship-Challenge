//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define mod 1000000007

long dp[1001][1001];
    
long long nCr(int n, int r){
    if(n<r) return 0;
    if(n==r||r==0) return 1;
    
    for(int i=0;i<=n;i++){
        dp[i][i]=1;
        dp[i][0]=1;
        for(int j=0;j<i;j++){
            dp[i][j] = ((dp[i-1][j-1])%mod+(dp[i-1][j]))%mod;
        }
    }
    return dp[n][r]%mod;
}

class Solution{
public:
    int knots(int M, int N, int K){
        return (nCr(M, K)*nCr(N, K))%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int M, N, K;
        cin>>M>>N>>K;
        
        Solution ob;
        cout<<ob.knots(M, N, K)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
