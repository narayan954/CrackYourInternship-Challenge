//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
#define mod 1000000007;

class Solution{   
public:
    long long numberOfSubsequences(int N, long long A[]){
        // code here 
        long long count = 0;
        for(int i=0;i<N;i++){
            if(A[i] && (!(A[i] & (A[i] - 1)))) count++;
        }
        long long res = 1;
        
        while(count--){
            res = (res*2)%mod;
        }
        
        return res-1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        long long A[N];
        for(int i=0;i<N;++i){
            cin >> A[i];
        }
        Solution ob;
        cout << ob.numberOfSubsequences(N,A) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
