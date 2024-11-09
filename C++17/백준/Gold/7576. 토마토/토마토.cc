#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

//205.kr
int board[1002][1002]; // 
int dist[1002][1002]; // 해당 칸을 방문했는지 여부를 저장
int n = 7, m = 10; // n = 행의 수, m = 열의 수
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int> > Q;
	int  temp;
	cin >> m >> n;
	for (int i = 0; i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> temp;
			board[i][j] = temp;
			if (temp == 1) {
				Q.push({ i,j });
			}
			if (temp == 0) {
				dist[i][j] = -1;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		//cout << '(' << cur.X << ", " << cur.Y << ") -> ";
		for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
			if (dist[nx][ny] >= 0) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
			dist[nx][ny] = dist[cur.X][cur.Y] + 1; // (nx, ny)를 방문했다고 명시
		
			Q.push({ nx,ny });
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans;
}