// UVA 10815 Andy’s First Dictionary
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
    string word;
    set<string> dict;

    while(cin >> word) {
        string cleanWord = "";
        word += ".";
        for(auto it=word.begin(); it != word.end(); it++) {
            if(isalpha(*it)) {
                cleanWord += tolower(*it);
            } else {
                if(cleanWord != "") {
                    dict.insert(cleanWord);
                }
                cleanWord.clear();
            }
        }
    }

    for(auto it=dict.begin(); it != dict.end(); it++) {
        cout << *it << endl;
    }
    
    
    return 0;
}
