// UVA 12015 - Google is Feeling Lucky
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>
#include <cmath>

#define filein freopen ("o.in", "r", stdin)
#define fileout freopen ("o.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t, maxVal = 0, v;
    string s;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        vector<pair<string, int>> data;
        maxVal = 0;
        for (int j = 0; j < 10; j++){
            cin >> s >> v;
            data.push_back(pair<string, int>(s,v));
            maxVal = max(maxVal, v);
        }
        
        cout << "Case #" << i << ":" << endl;
        for (auto it = data.begin(); it != data.end(); it++){
            if(it->second == maxVal) {
                cout << it->first << endl;
            }
        }
    }
    return 0;
}
