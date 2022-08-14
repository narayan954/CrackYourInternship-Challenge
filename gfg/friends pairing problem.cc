//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
#define mod 1000000007
class Solution
{
public:
    int countFriendsPairings(int n) { 
        vector<long long int> dp (n+1,1);
        for(int i=2; i<=n; i++)
             dp[i] = (dp[i-1]%mod + (i-1)*dp[i-2]%mod)%mod;
        return dp[n] % mod;
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends
