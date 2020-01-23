#include <iostream>
#include <queue>

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
    int t, n, k;
    scanf("%d", &t);
    while (t--) {
        priority_queue <ll> q;
        ll ans = 0;
        scanf("%d%d", &n, &k);
        for(int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            q.push(a);
        }

        for (int i = 0; i < k; i++) {
            ll d = q.top();
            q.pop();
            ans += d;
            q.push(d/2);
        }
        
        cout << ans << endl;
        
    }
    
    return 0;
}