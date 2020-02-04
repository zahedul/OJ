// UVA 11286 - Conformity
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>
#include <queue>

#define filein freopen ("../input.txt", "r", stdin)
#define fileout freopen ("../output.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
//     filein;
//     fileout;

    map<vector<int>, int> subject;
    vector<int> v(5);
    int n;
    while (scanf("%d", &n) && n) {
        subject.clear();
        int studentCount=0, popular=0;
        while (n--) {
            for (int i = 0; i < 5; ++i) {
                scanf("%d", &v[i]);
            }
            sort(v.begin(), v.end());
            subject[v]++;
        }
        for (auto it = subject.begin(); it != subject.end(); ++it) {
            if(popular == it->second) {
                studentCount += it->second;
            } else if ( popular < it->second) {
                popular = it->second;
                studentCount = it->second;
            }
        }
        printf("%d\n", studentCount);
    }

    
    return 0;
}
