//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findCount(vector<vector<int>> &matrix, int mid){
        int count = 0;
        for(auto x:matrix) count += lower_bound(x.begin(),x.end(),mid)-x.begin();
        return count;
    }
    
    int median(vector<vector<int>> &matrix, int R, int C){
        int target = R*C/2, l=0, h=INT_MAX, ans=-1;
        
        while(l<=h){
            int mid = (l+h)/2;
            int cnt = findCount(matrix,mid);
            if (cnt<=target){
                l=mid+1;
                ans = mid;
            }
            else h=mid-1;
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
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends
