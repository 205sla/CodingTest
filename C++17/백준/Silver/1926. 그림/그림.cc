#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502] = {};
bool vis[502][502] = {};
int n, m;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
//205.kr

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int countMax = 0, countP = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            board[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && board[i][j] == 1) {
                queue<pair<int, int>> Q;
                vis[i][j] = 1;
                int count = 1;
                Q.push({ i, j });
                //cout << "시작: (" << i << ", " << j << ") -> ";

                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    //cout << '(' << cur.X << ", " << cur.Y << ") ";
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) { 
                            continue;
                        }
                        if (vis[nx][ny] || board[nx][ny] != 1) {
                            continue;
                        }
                        count++;
                        vis[nx][ny] = 1;
                        Q.push({ nx, ny });
                    }
                }

                //cout << "\n발견: " << count << "\n\n";
                countP++;
                countMax = max(countMax, count); 
            }
        }
    }

    cout << countP << "\n" << countMax;
}