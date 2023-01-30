//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//#define X first
//#define Y second
//int n, m;
//int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
//int dy[8] = { 0,1,1,1,0,-1,-1,-1 };
//
//int main() {
//	
//
//
//
//	while (true) {
//		int board[50][50];
//		bool vis[50][50];
//
//		for (int i = 0; i < 50; i++) {
//			for (int j = 0; j < 50; j++) {
//				board[i][j] = 0;
//				vis[i][j] = 0;
//			}
//		}
//
//		cin >> m >> n;
//		if (n == 0 && m == 0) {
//			break;
//		}
//
//		int land = 0;
//
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				cin >> board[i][j];
//
//			}
//
//		}
//
//
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				queue<pair<int, int>> Q;
//				if (vis[i][j] == 0 && board[i][j] == 1) {
//
//					Q.push({ i,j });
//					land++;
//					while (!Q.empty())
//					{
//						pair<int, int> cur = Q.front();
//						vis[i][j] = 1;
//						Q.pop();
//
//
//						for (int dir = 0; dir < 8; dir++) {
//							int nx = cur.X + dx[dir];
//							int ny = cur.Y + dy[dir];
//
//							if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//								continue;
//							}
//							if (vis[nx][ny] || board[nx][ny] != 1) {
//								continue;
//							}
//
//							vis[nx][ny] = 1;
//							Q.push({ nx,ny });
//
//						}
//
//					}
//					
//
//				}
//
//
//			}
//		}
//
//
//		cout << land << "\n";
//
//
//	}
//
//
//	return 0;
//}