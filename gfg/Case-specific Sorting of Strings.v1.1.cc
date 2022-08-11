//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n){
        // your code here
        string ans,up,low;
        for (auto ch:str) (ch<='Z') ? up+=ch : low+=ch;
        sort(up.begin() , up.end());
        sort(low.begin() , low.end());
        int strA=0,strB=0;
        for (auto ch:str) (ch<='Z') ? ans+= up[strA++] : ans+= low[strB++];
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
