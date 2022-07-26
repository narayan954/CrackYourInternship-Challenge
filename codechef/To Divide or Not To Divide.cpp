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
    int a, b, n;
    cin >> a >> b >> n;
    if(a%b){
        while(true){
            if(n%a==0 && n%b!=0){
                cout<<n<<"\n";
                break;
            } else n += a-n%a;
        }
    } else cout<<-1<<"\n";
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
