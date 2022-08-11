//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    map<string, int> mp;
    
    int maxCoins(vector<int>&A,int n,int l=0,int r=-100){
        if (r==-100) r=n-1;
        if(l>r) return 0;
        string key = l+"|"+r;
        if(mp.find(key)!= mp.end()) return mp[key];
	    int left = A[l] + min(maxCoins(A,n,l+1,r-1),maxCoins(A,n,l+2,r));
	    int right = A[r] + min(maxCoins(A,n,l+1,r-1),maxCoins(A,n,l,r-2));
	    
	    int profit = max(left,right);
	    mp[key]=profit;
	    return profit;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}

// } Driver Code Ends
