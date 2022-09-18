//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    void seiveIt(vector<int> &primes){
	        primes[0]=primes[1]=0;
	        for(int i=2;i<primes.size();i++){
	            if(primes[i] && (long long)i * i < primes.size()){
	               for(int j=i*i;j<primes.size();j+=i) primes[j] = 0;
	            }
	        }
	    }
	    
		int Count(int L, int R){
		    vector<int> primes(R+1,1);
		    seiveIt(primes);
		    int prime=0,composite=0;
		    for(int i=L;i<=R;i++){
		        if(i==1) continue;
		        primes[i]?prime++:composite++;
		    }
		    return composite-prime;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
