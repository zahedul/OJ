// UVA 10815 Andy’s First Dictionary
#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm> 
#include <string>
#include <queue>
#include <sstream>

#define filein freopen ("input.txt", "r", stdin)
#define fileout freopen ("output.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main() {
    filein;
    // fileout;
    char input[20], word[50];
    string s1, s2;
    map<string, string> dict;

    while(scanf("%s", input)) {
        s1 = input;
        if (s1.compare("START") == 0) {
            continue;
        }
        if (s1.compare("END") == 0) {
            break;
        }
        scanf("%s", word);
        s2 = word;
        dict[s2] = s1;
    }

    while(scanf("%s\n\t", input)) {
        
        s1 = input;
        if (s1.compare("START") == 0) {
            continue;
        }
        if (s1.compare("END") == 0) {
            break;
        }
        cout << input;
    }

    // scanf("%s", input);
    // getchar();
    // while(getline(cin, s1)) {
    //     if (s1.compare("END") == 0) {
    //         break;
    //     }

    //     istringstream iss(s1, istringstream::in);
    //     while( iss >> s2 ) {
    //         char lastChar = s2.back();
    //         if(!isalpha(lastChar)) {
    //             s2 = s2.substr(0, s2.size()-1);
    //             if (dict.count(s2) > 0) {
    //                 cout << dict[s2] << lastChar << " ";
    //             } else {
    //                 cout << s2 << lastChar << " ";
    //             }
    //         } else {
    //             if (dict.count(s2) > 0) {
    //                 cout << dict[s2] << " ";
    //             } else {
    //                 cout << s2 << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
        
    // }
    
    
    return 0;
}
