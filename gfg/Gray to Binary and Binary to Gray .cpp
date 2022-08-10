//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    char stringxor(char ch1,char ch2){
        return (ch1==ch2)?'0':'1';
    }
  
    string binToGrey(string B) {
        string ans= "";
        ans+=B.at(0);
        for(int i=1;i<B.length();i++){
            ans+= stringxor(B[i-1],B[i]);
        }
        return ans;
    }
    
    string greyToBin(string G) {
        string ans= "";
        ans+=G.at(0);
        for(int i=1;i<G.length();i++){
            ans+= stringxor(ans.at(ans.length()-1),G[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string B,G;
        
        cin>>B;
        cin>>G;

        Solution ob;
        cout << ob.binToGrey(B) << endl;
        cout << ob.greyToBin(G) << endl;
    }
    return 0;
}
// } Driver Code Ends
