#include<iostream>
#include<queue>
#include<string>
using namespace std;

#define X first
#define Y second
int board[555][555];
int vis[555][555];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };


int main() {


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < m; j++) {
			board[i][j] = temp[j]- '0';
		}
	}


	
	queue<pair<int, int>> Q;
	vis[0][0] = 1;
	Q.push({ 0,0 });

	while (Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}
			if (vis[nx][ny] || board[nx][ny] != 1) {
				continue;
			}
			
			vis[nx][ny] = 1;
			Q.push({ nx,ny });
			


		}




	}









	return 0;
}