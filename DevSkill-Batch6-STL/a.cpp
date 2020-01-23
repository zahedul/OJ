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
    int t, y;
    ll x;
    set <ll> dataset;
    cin >> t;
    while (t--) {
        scanf("%d%lld", &y, &x);
        if(y==1) {
            dataset.insert(x);
        } else if (y==2) {
            dataset.erase(x);
        } else if (y==3) {
            auto search = dataset.find(x);
            if (search != dataset.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
