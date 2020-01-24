#include <iostream>
#include <map>

#define filein freopen ("b.in", "r", stdin)
#define fileout freopen ("b.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t, y, c;
    string x;
    map<string, int> marks;
    cin >> t;
    while (t--) {
        cin >> c >> x;
        auto it = marks.find(x);
        if(c == 1) {
            cin >> y;
            if (it != marks.end()) {
                y += it->second;
                marks.erase(it);
            }
            marks.insert(pair<string, int>(x, y));
        } else if (c==2) {
            if (it != marks.end()) {
                marks.erase(it);
            }
        } else {
            if (it != marks.end()) {
                cout << it->second << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    
    return 0;
}
