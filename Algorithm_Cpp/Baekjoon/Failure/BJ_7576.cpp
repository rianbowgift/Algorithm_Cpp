//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define X first
//#define Y second
//
//int board[555][555];
//int vis[555][555];
//int n, m;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int main() {
//
//	cin >> m >> n;
//	for (int i = 0; i < 555; i++) {
//		for (int j = 0; j < 555; j++) {
//			board[i][j] = -2;
//			
//
//		}
//
//	}a
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//			
//		}
//		
//	}
//
//
//
//
//	bool sw = false;
//	int answer = 0;
//
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//
//			queue<pair<int, int>> Q;
//			if (board[i][j] == 1 && vis[i][j] == 0) {
//
//				Q.push({ i,j });
//				vis[i][j] = 1;
//
//				
//					pair<int, int> cur = Q.front();
//					Q.pop();
//
//					for (int dir = 0; dir < 4; dir++) {
//						int nx = cur.X + dx[dir];
//						int ny = cur.Y + dy[dir];
//
//
//						if (board[nx][ny] == 0 && vis[nx][ny] == 0) {
//						//	cout << "d";
//							sw = true;
//							vis[nx][ny] = 1;
//							board[nx][ny] = 1;
//							Q.push({ nx, ny });
//						}
//						//if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//						//	continue;
//						//}
//						//if (vis[nx][ny] || board[nx][ny] != 1) {
//						//	continue;
//						//}
//
//
//
//					}
//
//
//				
//
//
//
//			}
//			
//			if (sw == true) {
//				answer++;
//			}
//			sw = false;
//		}
//
//
//	}
//	
//	cout << answer;
//
//
//
//}