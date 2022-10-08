//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        // code here
        unordered_map<char,int>mp;
        int i=0,count=0,n=s.length();
        while(i<k){
            mp[s[i]]++;
            i++;
        }
        while(i<n){
            if(mp.size()==k-1)count++;
            mp[s[i-k]]--;
            if(mp[s[i-k]]==0)mp.erase(s[i-k]);
            mp[s[i]]++;
            i++;
        }
        if(mp.size()==k-1)count++;
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends
