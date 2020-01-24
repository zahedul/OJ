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

vector<vector<int> > matrix;
map<string, int> command;

void printMatrix(int index, int dimention);
void incrementMatrix(int dimention);
void decrementMatrix(int dimention);
void transposeMatrix(int dimention);
void swapRow(int dimention, int a, int b);
void swapCol(int dimention, int a, int b);

int main() {
    // filein;
    // fileout;
    int t;
    scanf("%d", &t);
    command["row"] = 1; 
    command["col"] = 2; 
    command["inc"] = 3; 
    command["dec"] = 4;
    command["transpose"] = 5;
    for (int a=1; a <= t; a++) {
        int n, m;
        scanf("%d", &n);
        matrix.resize(n, vector<int>(n));;
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++){
                scanf("%1d", &matrix[i][j]);
            } 
        }

        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            string cmd;
            cin >> cmd;
            int x, y;
            switch (command[cmd]) {
                case 1:
                    scanf("%d %d", &x, &y);
                    swapRow(n, x-1, y-1);
                    break;
                case 2:
                    scanf("%d %d", &x, &y);
                    swapCol(n, x-1, y-1);
                    break;
                case 3:
                    incrementMatrix(n);
                    break;
                case 4:
                    decrementMatrix(n);
                    break;
                case 5:
                    transposeMatrix(n);
                    break;
                default:
                    break;
            }
        }
        
        printMatrix(a, n);
        matrix.clear();
        printf("\n");
    }
    
    return 0;
}

void printMatrix(int index, int dimention) {
    printf("Case #%d\n", index);
    for (int i = 0; i < dimention; i++) { 
        for (int j = 0; j < dimention; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void incrementMatrix(int dimention) {
    for (int i = 0; i < dimention; i++) { 
        for (int j = 0; j < dimention; j++){
            matrix[i][j] += 1;
            if (matrix[i][j] > 9) {
                matrix[i][j] = 0;
            }
        }
    }
}
void decrementMatrix(int dimention) {
    for (int i = 0; i < dimention; i++) { 
        for (int j = 0; j < dimention; j++){
            matrix[i][j] -= 1;
            if (matrix[i][j] < 0) {
                matrix[i][j] = 9;
            }
        }
    }
}
void transposeMatrix(int dimention) {
    for (int i = 0; i < dimention; i++) { 
        for (int j = i+1; j < dimention; j++){
            int tmp;
            tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}

void swapRow(int dimention, int a, int b) {    
    for (int i = 0; i < dimention; i++) { 
        int tmp;
        tmp = matrix[a][i];
        matrix[a][i] = matrix[b][i];
        matrix[b][i] = tmp;
    }
}

void swapCol(int dimention, int a, int b) {
    for (int i = 0; i < dimention; i++) { 
        int tmp;
        tmp = matrix[i][a];
        matrix[i][a] = matrix[i][b];
        matrix[i][b] = tmp;
    }
}