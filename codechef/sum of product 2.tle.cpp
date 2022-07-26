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
    int n ; cin >> n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        arr.pub(temp);
    }
    vector<int>lol;
    for(int i=0;i<n;i++) lol.pub(i);
    int ans=0;
    do{
        int acc=0;
        for(auto temp:lol){
            if(!arr[temp]) acc = 0;
            else ++acc; ans+=acc;
        }
    }while(next_permutation(all(lol)));
    cout<<ans<<"\n";
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

