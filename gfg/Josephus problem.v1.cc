//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int solve(vector<int> &arr, int k,int index){
        if(arr.size() == 1) return arr[0];
        index = (index+k)%(arr.size());
        arr.erase(arr.begin()+index);
        solve(arr,k,index);
    }
    
    int josephus(int n, int k){
        vector<int> arr;
        for(int i=0;i<n;i++) arr.push_back(i+1);
        int ans = solve(arr,k-1,0);
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends
