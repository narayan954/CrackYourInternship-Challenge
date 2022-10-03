//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    vector<int> isPrime;
    void seive(int n){
        isPrime.resize(n+1,1);
        isPrime[0]=0;
        isPrime[1]=0;
        for(int i=2;i<=n;i++){
            if(isPrime[i] && (long long)i*i<=n){
                for(int j=i*i;j<=n;j+=i) isPrime[j]=0;
            }
        }
    }
  
    int sumOfAll(int l, int r){
        seive(r);
        int sum = 0;
        if(l==1)sum++,l++;
        for(int i=l;i<=r;i++){
            for(int j=1;j<=i;j++){
                if(isPrime[j] and i%j==0) sum += j;
            }
        }return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}

// } Driver Code Ends
