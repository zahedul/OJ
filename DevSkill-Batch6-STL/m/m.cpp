// UVA 541 - Error Correction
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
    int n;
    while (scanf("%d", &n) && n){
        vector<vector<int> > matrix(n, vector<int>(n));
        int d, oddRowIndex, oddColumnIndex;
        int oddRowCount = 0, oddColumnCount = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                scanf("%d", &d);
                matrix[i][j] = d;
            }
        }

        for(int i=0; i<n; i++) {
            int sumRow = 0, sumColumn = 0;
            for(int j=0; j<n; j++) {
                sumRow += matrix[i][j];
                sumColumn += matrix[j][i];
            }
            if(sumRow%2) {
                oddRowCount++;
                oddRowIndex = i;
            }
            if(sumColumn%2) {
                oddColumnCount++;
                oddColumnIndex = i;
            }
        }

        if(!oddRowCount && !oddColumnCount) {
            printf("OK\n");
        } else if (oddRowCount == 1 && oddColumnCount == 1) {
            printf("Change bit (%d,%d)\n", oddRowIndex+1, oddColumnIndex+1);
        } else {
            printf("Corrupt\n");
        }

    }
    
    
    return 0;
}
