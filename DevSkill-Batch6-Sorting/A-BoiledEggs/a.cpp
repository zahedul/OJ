//
// Created by Zahedul Alam on 8/2/20.
//
// 11900 - Boiled Eggs

/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <ctime>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define filein freopen ("../A-BoiledEggs/input.txt", "r", stdin)
#define fileout freopen ("../A-BoiledEggs/output.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/******** User-defined Function *******/


/**************************************/


/********** Main()  function **********/
int main() {
//    filein;
//    fileout;
    int t, n, p, q;
    vector<int> gm;

    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        int max_egg = 0;
        scanf("%d %d %d", &n, &p, &q);
        gm.push_back(0);
        for (int j = 1; j <= n; j++) {
            int d;
            scanf("%d", &d);
            gm.push_back(gm[j-1] + d);
        }

        for (int k = p; k >= 0 ; --k) {
            if(gm[k] <= q && k <= n ){
                max_egg = k;
                break;
            }
        }
        gm.clear();


        printf("Case %d: %d\n", i+1, max_egg);

    }

    return 0;
}
/********  Main() Ends Here *************/