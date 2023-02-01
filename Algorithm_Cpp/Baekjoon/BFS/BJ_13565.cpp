//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<string>
//using namespace std;
//#define X first
//#define Y second
//int board[1002][1002];
//bool vis[1002][1002];
//int n, m;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int main() {
//
//	cin >> n >> m;
//
//
//	for (int i = 0; i < n; i++) {
//		string temp;
//		cin >> temp;
//		for (int j = 0; j < temp.size(); j++) {
//			board[i][j] =  temp[j] - '0';
//		}
//
//	}
//
//
//
//	int i = n - 1;
//	for (int j = 0; j < m ; j++) {
//		queue<pair<int, int>> Q;
//		if (vis[i][j] == 0 && board[i][j] == 0) {
//
//			Q.push({ i,j });
//
//			while (!Q.empty())
//			{
//
//				pair<int, int> cur = Q.front();
//				vis[i][j] = 1;
//				Q.pop();
//
//
//
//
//				for (int dir = 0; dir < 4; dir++) {
//					int nx = cur.X + dx[dir];
//					int ny = cur.Y + dy[dir];
//
//					if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//						continue;
//					}
//					if (vis[nx][ny] || board[nx][ny] != 0) {
//						continue;
//					}
//
//					vis[nx][ny] = 1;
//					Q.push({ nx,ny });
//					if (nx == 0) {
//						cout << "YES";
//						return 0;
//					}
//				}
//
//			}
//
//
//
//		}
//
//	}
//
//	cout << "NO";
//
//
//
//
//	return 0;
//
//}