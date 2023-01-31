//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//#define X first
//#define Y second
//int board[502][502];
//bool vis[502][502];
//int n, m;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
////Á¦·ÎÀÎµ¦½º ¾È¾¸
//int main() {
//	int k;
//	cin >> n >> m >> k;
//	int max = 0;
//	for (int i = 1; i <= k; i++) {
//		int temp, temp2;
//		cin >> temp >> temp2;
//		board[temp][temp2] = 1;
//	}
//
//
//	
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			queue<pair<int, int>> Q;
//			int temp_max = 0;
//			if (vis[i][j] == 0 && board[i][j] == 1) {
//				
//				Q.push({ i,j });
//				
//				while (!Q.empty())
//				{
//
//					pair<int, int> cur = Q.front();
//					vis[i][j] = 1;
//					temp_max++;
//					Q.pop();
//					
//
//
//
//					for (int dir = 0; dir < 4; dir++) {
//						int nx = cur.X + dx[dir];
//						int ny = cur.Y + dy[dir];
//						
//						if (nx <= 0 || nx > n || ny <= 0 || ny > m) {
//							continue;
//						}
//						if (vis[nx][ny] || board[nx][ny] != 1) {
//							continue;
//						}
//
//						vis[nx][ny] = 1;
//						Q.push({ nx,ny });
//						
//					}
//					
//				}
//				if (temp_max > max) {
//					max = temp_max;
//				}
//			}
//
//
//		}
//	}
//
//	cout << max;
//
//
//
//
//	return 0;
//}