#include <iostream>
#include <vector>
#include <algorithm>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

bool compare(const pair<string, int>&a, const pair<string, int>&b){
    return a.second > b.second || ((a.second == b.second) && a.first.compare(b.first) < 0);
}

int main() {
    // filein;
    // fileout;
    vector <pair<string, int>> v;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        string s;
        int number;
        cin >> s >> number;
        v.push_back(make_pair(s, number));
    }

    sort(v.begin(), v.end(), compare);
    
    for (int i=0; i<n; i++)  { 
        cout << v[i].first << " " << v[i].second << endl; 
    } 
    
    return 0;
}