//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long gcd(long long a, long long b){
        if(b==0) return a;
        else gcd(b,a%b);
    }
    long long lcm(long long a, long long b){
        return (a*b)/gcd(a,b);
    }
    
    long long lcmTriplets(long long N) {
        // code here
        if(N<3) return N;
        long long lcmab = lcm(N,N-1);
        if(N&1) return lcm(lcmab,N-2);
        if(gcd(N,N-3)==1) return lcm(lcmab,N-3);
        return lcmTriplets(N-1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    }
}
// } Driver Code Ends
