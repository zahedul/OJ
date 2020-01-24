#include <iostream>
#include <vector>
#include <algorithm> 

#define filein freopen ("c.in", "r", stdin)
#define fileout freopen ("c.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t;
    vector<ll> data;
    ll v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> v;
        data.push_back(v);
    }

    sort(data.begin(), data.end());
    
    for (auto it = data.begin(); it != data.end(); it++) {
        cout << *it << " ";
    }
    
    return 0;
}
