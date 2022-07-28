//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

bool isPrime(int n){
   for(int i=2;i*i<=n;i++)
       if(n%i==0)
           return false;
   return true;
}

int bfs(vector<int>adj[],int n,int node){
    int ans=0;
    int count=0;
    queue<int>q;
    q.push(node);
    while(!q.empty()){
       count++;
       int n=q.size();
       while(n--){
           int top=q.front();
           q.pop();
           for(auto i:adj[top]){
               if(isPrime(count+i)) ans++;
               q.push(i);
           }
       }
    }
    return ans;
}

class Solution{   
public:
    int firingEmployees(vector<int> &arr, int n){
        // code here
        int ans=INT_MIN;
        vector<int>adj[n+1];
        for(int i=0;i<n;i++) adj[arr[i]].push_back(i+1);
        
        for(auto j:adj[0]) ans=max(ans,bfs(adj,n,j));
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n,0);
        
        for(int i=0; i<n; i++)
            cin >> arr[i];

        Solution obj;
        cout << obj.firingEmployees(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
