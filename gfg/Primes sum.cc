//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        vector<bool> isPrime(N+1,true);
        isPrime[0] = isPrime[1] = false;
        for(int i=2;i*i<=N;i++){
            if (isPrime[i]){
                for (int j=2*i;j<=N;j+=i) isPrime[j] = false;
            }
        }
        for(int i=2;i<=N/2;i++){
            if (isPrime[i] and isPrime[N-i]) return "Yes";
        }
        return "No";
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
