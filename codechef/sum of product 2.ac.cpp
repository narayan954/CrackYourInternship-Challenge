#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cstring>
#include <deque>
#include <queue>
#include <numeric>

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (int)(a).size()

#define x first
#define y second

#define pub push_back
#define pob pop_back

#define puf push_front
#define pof pop_front

#define int long long
#define mod 998244353

using namespace std;

int fact(int n, int k){
    if(n<k)return 0;
    long long ans=1;
    for(int i=n; i>k; i--){
         ans = (ans*i)%mod;
    }
    return ans;
}

void solve_solve_solve() {
    int n,temp,m=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        m += temp;
    }
    
    int ans = (fact(n+1,n-m+2))%mod;
    ans = (ans*fact(n-m+1,0))%mod;
    ans = (ans*m)%mod;
    cout<<ans<<endl;
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int Q = 1;
    cin >> Q;

    while (Q--) {
        solve_solve_solve();
    }

    return 0;
}
