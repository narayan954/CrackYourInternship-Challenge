//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long long int nineDivisors(long long int N){
        int ans = 0;
        int limit = sqrt(N);
        vector<int> prime(limit+1,0);
        for(int i=1;i<limit+1;i++) prime[i] = i;
        for(int i=2;i<=sqrt(limit);i++){
            if(prime[i]==i){
                for(int j = i*i;j<=limit;j+=i){
                    if(prime[j]==j) prime[j]=i;
                }
            }
        }
        for(int i=2;i<limit+1;i++){
            int p=prime[i];
            int q=prime[i/prime[i]];
            if(p*q==i && p!=q && q!=1) ans++;
            else if(prime[i]==i && pow(i,8)<=N) ans++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.nineDivisors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
