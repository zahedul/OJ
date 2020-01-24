// UVA 10295 - Hay Points
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
    // filein;
    // fileout;
    int m, n;
    map<string, int> dict;
    string word;
    int val;
    scanf("%d %d", &m, &n);
    while(m--) {
        cin >> word >> val;
        dict[word] = val;
    }
    while (n--) {
        int cost = 0;
        while (cin >> word) {
            if(word[0] == '.') break;
            cost += dict[word];
        }

        printf("%d\n", cost);
        
    }
    return 0;
}
