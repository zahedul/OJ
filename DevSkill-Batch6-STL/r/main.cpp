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
    map<pair<int, int>, string> figureCode;
    int n, t, code1, code2;
    string name;

    scanf("%d", &n);
    while(n--) {
        cin >> code1 >> code2 >> name;
        figureCode[make_pair(code1, code2)] = name;
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &code1, &code2);
        cout << figureCode[make_pair(code1, code2)] << endl;
    }

    
    return 0;
}
