// UVA 11360 - Have Fun with Matrices
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

bool sortByVal(const pair<string, int> &a, const pair<string, int> &b) { 
    return (a.second > b.second); 
}

int main() {
    // filein;
    // fileout;
    int t;
    

    string colorName;
    while(scanf("%d", &t) && t) {
        map<string, int> baloon;
        vector<pair<string, int>> v;

        for (int i = 0; i < t; i++) {
            cin >> colorName;
            baloon[colorName]++;    
        }

        for (auto it = baloon.begin(); it != baloon.end(); it++) {
            v.push_back(make_pair(it->first, it->second));
        }

        sort(v.begin(), v.end(), sortByVal);
        
        cout << v[0].first << endl;
    }
    
    return 0;
}