#include <iostream>
#include <vector>
#include <algorithm> 

#define filein freopen ("d.in", "r", stdin)
#define fileout freopen ("d.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t, x, a, b;
    vector<int> data;
    int v;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> v;
        data.push_back(v);
    }

    cin >> x >> a >> b;
    data.erase(data.begin() + (x - 1));
    data.erase(data.begin() + (a - 1), data.begin() + (b - 1));

    cout << data.size() << endl;
    for (auto it=data.begin(); it != data.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
