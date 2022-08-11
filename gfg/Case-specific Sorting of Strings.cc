//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string ans,up,low;
        for (auto ch:str){
            if (isupper(ch)) up+=ch;
            else low+=ch;
        }
        sort(up.begin() , up.end());
        sort(low.begin() , low.end());
        for (int i=0; i<n; i++){
            if (isupper(str[i])){
                ans+= up[0];
                up.erase(up.begin());
            }else {
                ans+= low[0];
                low.erase(low.begin());
            }
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
