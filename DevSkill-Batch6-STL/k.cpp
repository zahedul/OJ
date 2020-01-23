#include <iostream>
#include <map>
#include <algorithm> 
#include <string>

#define filein freopen ("k.in", "r", stdin)
#define fileout freopen ("k.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int n, q;
    map<string, string> data;
    cin >> n;
    getchar();
    while (n--) {
        string one, two;
        getline(cin, one);
        getline(cin, two);
        data[one] = two;
    }

    cin >> q;
    getchar();
    while (q--) {
        string s;
        getline(cin, s);
        for (auto it = data.begin(); it != data.end() ; it++) {
            if (it->first == s) {
                cout << it->second << endl;
                break;
            }
        }
        
    }
    return 0;
}
