// UVA 540 - Team Queue
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
    int t, sc = 1;
    while(scanf("%d", &t) && t) {
        queue<int> teamQ[1010], combineQ;
        map<int, int> teams;
        for(int i = 0; i < t; i++) {
            int num, teamNumber;
            scanf("%d", &num);
            for(int j=0; j < num; j++) {
                scanf("%d", &teamNumber);
                teams[teamNumber] = i;
            }
        }
        printf("Scenario #%d\n", sc++);
        
        char cmd[100];
        int number;
        while(scanf("%s", cmd) && cmd[0] != 'S') {
            if (cmd[0] == 'E') {
                scanf("%d", &number);
                int tm = teams[number];
                if (teamQ[tm].empty()) {
                    combineQ.push(tm);
                }
                teamQ[tm].push(number);
            } else {
                int tm = combineQ.front();
                printf("%d\n", (int)teamQ[tm].front());
                teamQ[tm].pop();
                if (teamQ[tm].empty()) {
                    combineQ.pop();
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
