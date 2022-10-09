//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool is_prime(int num){
	        if (num==0 or num==1)return false;
	        for(int i=2;i*i<=num;i++) if (num%i==0) return false;
	        return true;
	    }
		int NthTerm(int N){
		    if (is_prime(N)) return 0;
		    int count = 1;
		    while(!(is_prime(N-count) or is_prime(N+count))) count++;
		    return count;
		}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
