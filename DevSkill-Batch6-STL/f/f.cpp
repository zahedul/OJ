#include <iostream>
#include <map>
#include <algorithm> 

#define filein freopen ("f.in", "r", stdin)
#define fileout freopen ("f.out", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    // filein;
    // fileout;
    int n, m;
     while (cin >> n >> m) {
         map<int, int> data;
         int x, count = 0;
         if (!(n || m)) {
             break;
         }
         for (int i = 0; i < n; i++){
             cin >> x;
             data[x]++;
         }

         for (int i = 0; i < m; i++) {
             cin >> x;
             data[x]++;
         }

         for(auto it=data.begin(); it!=data.end(); it++) {
             if(it->second == 2) {
                 count++;
             }
         }
         
         cout << count << endl;
         
     }
     
    

    return 0;
}
