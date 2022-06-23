#include<iostream>
#include<queue>
using namespace std;

int board[500][500];
int vis[500][500];

int dx[4] = {1,0};
int dy[4] = {0,1};

int n, m;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			cin >> board[i][j];
		}
	}


	queue<pair<int, int>> Q;
	vis[0][0] = 1;
	Q.push({ 0,0 });


	while (!Q.empty()) {

		pair<int, int> cur = Q.front();
		Q.pop();

		int maxd = board[cur.first][cur.second];
		
		for (int dir = 0; dir < 2; dir++) {
			int nx = cur.first + maxd;
			


		}
		




		//for (int dir = 0; dir < 4; dir++) {
		//	int nx = cur.first + dx[dir];
		//	int ny = cur.second + dy[dir];

		//	if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
		//		continue;
		//	}
		//	if (vis[nx][ny] || board[nx][ny] != 1) {
		//		continue;
		//	}

		//	vis[nx][ny] = 1;
		//	Q.push({ nx,ny });

		//}



	}

	

}