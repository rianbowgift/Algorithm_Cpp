//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//#define X first
//#define Y second
//int arr[102];	//각 높이별 고립횟수 저장
//int n, m;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int main() {
//	int board[102][102];
//	bool vis[102][102];
//	for (int i = 0; i <= 100; i++) {
//		for (int j = 0; j <= 100; j++) {
//			board[i][j] = 0;
//			vis[i][j] = 0;
//		}
//	}
//	cin >> n;
//	int max = -1;	//반복 최대숫자
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int temp = 0;
//			cin >> temp;
//			board[i][j] = temp;
//			if (temp > max) {
//				max = temp;
//			}
//		}
//		
//	}
//
//	for (int k = 1; k < max; k++) {
//		for (int i = 0; i <= 100; i++) {
//			for (int j = 0; j <= 100; j++) {
//				vis[i][j] = 0;
//			}
//		}
//		int sum = 0;
//
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				queue<pair<int, int>> Q;
//				if (vis[i][j] == 0 && board[i][j]  >=1) {
//
//					Q.push({ i,j });
//
//					while (!Q.empty())
//					{
//
//						pair<int, int> cur = Q.front();
//						vis[i][j] = 1;
//						
//						Q.pop();
//
//
//						for (int dir = 0; dir < 4; dir++) {
//							int nx = cur.X + dx[dir];
//							int ny = cur.Y + dy[dir];
//
//							if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
//								continue;
//							}
//							if (vis[nx][ny]) {
//								continue;
//							}
//							
//							if (board[nx][ny] <= k) {
//								continue;
//							}
//							sum++;
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
//		arr[k] = sum;
//
//	}
//
//	sort(arr, arr + max);
//
//	cout << arr[max-1];
//	
//
//
//
//
//	return 0;
//}