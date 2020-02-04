//
// Created by Zahedul Alam on 3/2/20.
//
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

#define filein freopen ("../IThinkItsEasy/input.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);

using namespace std;

bool sortBySecond(const pair<string, int> &a, const pair<string, int> &b) {
//    if (a.second == b.second) {
//        return a.first < b.first;
//    }
    return (a.second < b.second);
}

int main() {
    filein;
    int t;
    string s;
    vector<pair<string, int>> data;

    cin >> t;
    getchar();
    while(t--) {
        getline(cin, s);
        istringstream ss(s);
        do {
            string word;
            ss >> word;
            if(!word.empty()) {
                data.push_back(make_pair(word, word.size()));
            }
        } while (ss);

        stable_sort(data.begin(), data.end(), sortBySecond);

        cout << " "; // thats a mistake in test case
        for (auto & it : data) {
            cout << it.first << " ";
        }
        if(t) cout << endl;
        data.clear();
    }
}