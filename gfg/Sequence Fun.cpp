//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		long mod=1e9+7;
		int NthTerm(int n){
		    if (n==1) return 2;
		    if (n==2) return 5;
		    return (((NthTerm(n-1)%mod)*n)%mod+1)%mod;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
