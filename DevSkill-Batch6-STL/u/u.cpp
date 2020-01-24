// UVA 10815 Andy’s First Dictionary
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>
#include <queue>

#define filein freopen ("input.txt", "r", stdin)
#define fileout freopen ("output.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    filein;
    fileout;
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        map<int, int> snowflakes;
        int s;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &s);
            int c = snowflakes[s];
            
        }

        printf("%lld\n", (ll)snowflakes.size());
    }
    
    return 0;
}
