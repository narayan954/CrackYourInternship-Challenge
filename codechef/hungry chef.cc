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
    int x,y,n,r;
    cin >> x >> y >> n >> r;
    if((x*n)>r) cout<<-1<<"\n";
    else if((y*n)<=r) cout<<0<<" "<<n<<"\n";
    else {
        int count_y = (r-n*x)/(y-x);
        cout<<n-count_y<<" "<<count_y<<"\n";
    }
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
