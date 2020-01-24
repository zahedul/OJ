#include <iostream>
#include <vector>
#include <algorithm> 

#define filein freopen ("e.in", "r", stdin)
#define fileout freopen ("e.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t, q;
    vector<ll> data;
    ll v, y;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> v;
        data.push_back(v);
    }

    cin >> q;
    while (q--) {
        cin >> y;
        auto it = lower_bound(data.begin(), data.end(), y);
        if (*it == y) {
            cout << "Yes " << distance(data.begin(), it) + 1 << endl;
        } else {
            cout << "No " << distance(data.begin(), it) + 1 << endl;
        }
    }
    

    return 0;
}
