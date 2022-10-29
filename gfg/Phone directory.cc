//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s){
        vector<vector<string>> ans;
        unordered_map <string,set<string>> mp;
        for(int i=0;i<n;i++){
            string temp;
            for(auto ch:contact[i]){
                temp.push_back(ch);
                mp[temp].insert(contact[i]);
            }
        }
        string temp;
        for(auto ch:s){
            temp.push_back(ch);
            if(mp.find(temp)==mp.end()) ans.push_back({"0"});
            else ans.push_back(vector<string> (mp[temp].begin(),mp[temp].end()));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
