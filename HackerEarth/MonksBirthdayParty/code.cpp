#include <iostream>
#include <set>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t, n;
    scanf("%d", &t);
    while (t--) {
        set <string> names;
        string name;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            cin >> name;
            names.insert(name);
        }
        for (auto it = names.begin(); it != names.end(); it++) {
            cout << *it << endl;
        }
        
    }
    
    return 0;
}