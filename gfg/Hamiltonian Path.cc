//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<bool> vis;
    map<int,vector<int>> mp;
    
    bool dfs(int i,int count=1){
        if (count == mp.size()) return true;
        
        vis[i] = true;
        
        for(auto it:mp[i]){
            if(!vis[it] and dfs(it,count+1)) return true;
        }
        
        return vis[i] = false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges){
        
        for(auto edge:Edges){
            mp[edge[0]].push_back(edge[1]);
            mp[edge[1]].push_back(edge[0]);
        }
        
        vis.resize(2*N+1,false);
        
        for(int i=1;i<=2*N;i++){
            if(dfs(i)) return true;
        }
        
        return false;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends
