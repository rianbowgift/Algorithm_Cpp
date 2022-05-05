//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//
//int board[500][500];
//bool vis[500][500];
//int sums[500][500];
//int n, m;
//
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		string temp;
//		cin >> temp;
//		for (int j = 0; j < m; j++) {
//			board[i+1][j+1] = temp[j] -48;
//		}
//	}
//
//	//for (int i = 1; i <= n; i++) {
//	//	for (int j = 1; j <= m; j++) {
//	//		cout << board[i][j] << " ";
//	//	}
//	//	cout << "\n";
//	//}
//
//	queue<pair<int, int>> Q;
//	vis[1][1] = 1;
//	sums[1][1] = 1;
//	Q.push({ 1,1 });
//
//	while (!Q.empty()) {
//		pair<int, int> cur = Q.front();
//		int front_sum = sums[cur.first][cur.second];
//		//cout << cur.first << cur.second;
//		Q.pop();
//		
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//			if (nx <= 0 || nx > n || ny <= 0 || ny > m) {
//				continue;
//			}
//
//			if (vis[nx][ny] || board[nx][ny] != 1) {
//				continue;
//			}
//
//			vis[nx][ny] = 1;
//			sums[nx][ny] = front_sum+1;
//			Q.push({ nx,ny });
//
//		}
//
//
//
//
//	}
//
//	cout << sums[n][m];
//
//
//
//
//
//
//}