//#include<iostream>
//#include<queue>
//using namespace std;
//
//int board[500][500];
//int vis[500][500];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	
//	int t;
//	int count = 0;
//
//	cin >> t;
//
//	for (int z = 0; z < t; z++) {
//
//		queue<pair<int, int>>Q;
//		int n_size;
//		int m_size;
//		int k;
//		cin >> n_size >> m_size >> k;
//
//		for (int cased = 0; cased < k; cased++) {
//			int n, m;
//			cin >> n >> m;
//			vis[n][m] = 1;
//			Q.push({ n,m });
//
//			bool ck = false;
//			while (!Q.empty()) {
//				pair<int, int> cur = Q.front();
//				Q.pop();
//
//				for (int dir = 0; dir < 4; dir++) {
//					int nx = cur.first + dx[dir];
//					int ny = cur.second + dy[dir];
//					
//					if (nx < 0 || nx >= n_size || ny < 0 || ny >= m_size) {
//						continue;
//					}
//					
//					if (vis[nx][ny] ) {
//						continue;
//					}
//					
//					ck = true;
//					vis[nx][ny] = 1;
//					Q.push({ nx,ny });
//
//				}
//			}
//			if (ck == true) {
//				count++;
//			}
//
//		}
//
//		
//		cout << count;
//
//
//
//
//
//
//
//
//	}
//
//
//
//
//
//}