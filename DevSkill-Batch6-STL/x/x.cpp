// UVA 10954 - Add All
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>
#include <queue>

#define filein freopen ("x.in", "r", stdin)
#define fileout freopen ("x.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int n;
    while(scanf("%d", &n) && n) {
        priority_queue <int, vector<int>, greater<int> > data;
        int add = 0, cost = 0, a;

        for(int i=0; i < n; i++) {
            scanf("%d", &a);
            data.push(a);
        }

        while(data.size() > 1) {
            add = data.top(); data.pop();
            add += data.top(); data.pop();
            cost += add;
            data.push(add);
        }
        printf("%d\n", cost);
    }
    
    return 0;
}
