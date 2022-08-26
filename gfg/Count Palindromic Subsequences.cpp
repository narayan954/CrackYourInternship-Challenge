//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define mod 1000000007

class Solution{
    public:
    int dp[1001][1001];
    
    long long int solve(int i,int j,string &str){
        if(i>j) return 0;
        if(i==j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(str[i]==str[j]) return dp[i][j] = ((solve(i,j-1,str) + solve(i+1,j,str) + 1)%mod);
        else return dp[i][j] = (( solve(i,j-1,str) + solve(i+1,j,str) - solve(i+1,j-1,str) + mod)%mod);
    }
    
    long long int  countPS(string str){
        
        memset(dp,-1,sizeof(dp));
        int n=str.size();
        return solve(0,n-1,str);
    }
};


//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends
