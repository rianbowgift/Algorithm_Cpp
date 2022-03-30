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
//int BJ_1926() {
//	
//	cin >> n >> m;
//	int sum=0;
//	int max = 0;
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
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			queue<pair<int, int>> Q;
//			if (vis[i][j] == 0 && board[i][j] == 1) {
//				
//				Q.push({ i,j });
//				int temp_max = 0;
//				while (!Q.empty())
//				{
//					temp_max++;
//					pair<int, int> cur = Q.front();
//					vis[i][j] = 1;
//					Q.pop();
//					
//
//					//cout << "(" << cur.X << ", " << cur.Y << ") -> ";
//
//					for (int dir = 0; dir < 4; dir++) {
//						int nx = cur.X + dx[dir];
//						int ny = cur.Y + dy[dir];
//						
//						if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
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
//				sum++;
//				if (temp_max > max) {
//					max = temp_max;
//				}
//			}
//
//
//		}
//	}
//
//
//	cout << sum << "\n" << max;
//
//
//
//
//	return 0;
//}