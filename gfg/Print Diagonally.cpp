//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A){
		vector<int> res;res.push_back(A[0][0]);
		int row=0, col=1;
		
		while(col<N){
		    int i=row, j=col;
		    while(j>=0 && i<N) res.push_back(A[i++][j--]);
		    col++;
		}
		
		col = N-1, row = 1;
		while(row<N){
		    int i=row, j=col;
		    while(j>=0 && i<N) res.push_back(A[i++][j--]);
		    row++;
		}
		return res;
	}
};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends
