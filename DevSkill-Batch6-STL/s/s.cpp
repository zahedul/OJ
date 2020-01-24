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

bool sortBoth(const pair<ll,ll> &a, const pair<ll,ll> &b) { 
     
    if (a.first == b.first) {
        return (a.second > b.second);
    }

    return (a.first < b.first);
} 

int main() {
    // filein;
    // fileout;
    int t;
    
    scanf("%d", &t);
    while(t--) {
        int n;
        ll x, y;
        vector<pair<ll, ll>> dataset;
        scanf("%d", &n);
        for(int i=0; i < n; i++) {
            scanf("%lld %lld", &x, &y);
            dataset.push_back(pair<ll,ll>(x, y));
        }

        sort(dataset.begin(), dataset.end(), sortBoth);
        for(int i=0; i < n; i++) {
            printf("%lld %lld\n", dataset[i].first, dataset[i].second);
        }
    }
    
    
    return 0;
}