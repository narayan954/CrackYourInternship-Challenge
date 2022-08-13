//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};


// } Driver Code Ends
/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    static bool compare(struct val a,struct val b){
    return a.second<b.second;
    }
    int maxChainLen(struct val p[],int n)
    {
        sort(p,p+n,compare);
        int l=1,prev=p[0].second;
        for(int i=1;i<n;i++){
            if(p[i].first>prev){
                prev=p[i].second; l++;
            }
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		Solution ob;
		cout<<ob.maxChainLen(p,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends
