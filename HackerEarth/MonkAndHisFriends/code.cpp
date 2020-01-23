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
    int t, n, m;
    scanf("%d", &t);
    while (t--) {
        set <ll> candies;
        ll candy;
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) {
            scanf("%lld", &candy);
            candies.insert(candy);
        }

        for(int i = 0; i < m; i++) {
            int count = candies.size();
            scanf("%lld", &candy);
            candies.insert(candy);
            
            if (count == candies.size()) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}