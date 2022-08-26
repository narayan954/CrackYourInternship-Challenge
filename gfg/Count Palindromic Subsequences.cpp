//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007;
class Solution{
    public:
    
    long long int  countPS(string str){
        vector<long long int>c(n,0), p(n,0);
        int n = str.length();
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(i==j) c[j]=1;
                else if(str[i]==str[j]) c[j]=(c[j-1]+p[j]+1)%mod;
                else c[j]=(c[j-1]+p[j]-p[j-1])%mod;
            }
            p=c;
        }
        return p[n-1];
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
