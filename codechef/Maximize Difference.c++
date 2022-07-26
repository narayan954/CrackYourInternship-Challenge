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

using namespace std;


void solve_solve_solve() {
    int n,m ; cin >> n >> m;
    int l = n*(m/n);
    int ans = l-n;
    pair <int,int> p = {n,l};
    for(int i=n+1;i<2*n;i++){
        int h = i*(m/i);
        if(h-i>ans){
            ans = h-i;
            p={i,h};
        }
    }
    cout<<p.first<<" "<<p.second<<"\n";
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
