//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    int binarySearch(int arr[], int n, int t) {
        int l = 0, r = n-1;
        while(l <= r) {
            int mid = (l + r) >> 1;
            if(arr[mid] <= t) l = mid+1;
            else r = mid - 1;
        }
        return l;
    }
  
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n){
        vector<int> ans;
        sort(arr2,arr2+n);
        for(int i=0;i<m;i++){
            int key = arr1[i];
            if(arr2[0]>key) ans.push_back(0);
            else {
                int num = binarySearch(arr2, n, arr1[i]);
                ans.push_back(num);
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
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
