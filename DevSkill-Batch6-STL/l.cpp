// UVA 484 - The Department of Redundancy Department
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>

#define filein freopen ("l.in", "r", stdin)
#define fileout freopen ("l.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int n;
    map<int, int> data;
    vector<int> v;
    while (cin >> n){
        int count = ++data[n];
        if (count == 1) {
            v.push_back(n);
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << data[v[i]] << endl;
    }
    
    
    
    return 0;
}
