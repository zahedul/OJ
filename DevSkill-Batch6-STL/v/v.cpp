// UVA 11917 - Do Your Own Homework
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>

#define filein freopen ("v.in", "r", stdin)
#define fileout freopen ("v.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        int n, d, cd;
        map<string, int> data;
        string s, as;
        scanf("%d", &n);
        for(int j=0; j < n; j++) {
            cin >> s >> cd;
            data[s] = cd;
        }
        cin >> d >> as;

        if(data[as] <= d && data[as]!=0) {
            printf("Case %d: Yesss\n", i);
        } else if (data[as] <=d+5 && data[as]!=0) {
            printf("Case %d: Late\n", i);
        } else {
            printf("Case %d: Do your own homework!\n", i);
        }
    }
    return 0;
}
