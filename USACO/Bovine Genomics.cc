#include <bits/stdc++.h>
using namespace std;

int main() {
 	freopen("cownomics.in", "r", stdin);
 	freopen("cownomics.out", "w", stdout);
	int n,m; cin >> n >> m;
	vector<string> spotty;
	vector<string> plain;
	for(int i = 0; i < n; i++){
	    string temp;cin>>temp;
	    spotty.push_back(temp);
	}
	for(int i = 0; i < n; i++){
	    string temp;cin>>temp;
	    plain.push_back(temp);
	}
	int ans = 0;
	for(int i=0;i<m;i++){
	    map<char,int> gene;
	    for(auto x:spotty) gene[x[i]]++;
	    bool flag = true;
	    for(auto x:plain){
	       if ( gene.find(x[i]) == gene.end() ) {
	           continue;
	       } else {
	           flag = false;
	           break;
	       }
        }
        if(flag) {
           ans++;
        }
	}
	cout<<ans<<endl;
	return 0;
}
