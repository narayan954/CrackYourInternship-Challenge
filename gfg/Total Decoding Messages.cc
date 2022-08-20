//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#define mod 1000000007

class Solution {
	public:
		int CountWays(string str){
		    const char *digit = str.c_str();
		    if(digit[0]=='0') return 0;
		    int n = str.length();
		    int count[n+1] = {0};
		    count[0]=1;count[1]=1;
		    
		    for(int i=2;i<=n;i++){
		        if(digit[i-1]>'0') count[i]=count[i-1];
		        if((digit[i-2]=='1') || (digit[i-2]=='2' && digit[i-1]<'7')){
		            count[i]=(count[i]+count[i-2])%mod;
		        }
		    }
		    return count[n];
		}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
