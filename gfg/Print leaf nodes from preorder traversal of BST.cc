//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<N;i++){
            if(st.size() and arr[i]>st.top()){
                int temp = st.top(),count=0;
                while(st.size() and arr[i]>st.top()){
                    st.pop();
                    count++;
                }
                if (count>1) ans.push_back(temp);
            }
            st.push(arr[i]);
        }
        ans.push_back(st.top());
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
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
