//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//
//int board[1005][1005];
//bool vis[1005][1005];
//int day = 0;
//int n, m;
//bool sw = false;
//
//
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	queue < pair<int, int>>Q;
//	queue < pair<int, int>>Q2;
//
//	
//	cin >> m >> n;
//	int zero_sum = n * m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int temp;
//			cin >> temp;
//			board[i][j] = temp;
//			if (temp == -1) {
//				zero_sum--;
//			}
//			if (temp == 1) {		//익은 토마토 위치 미리 기억
//				zero_sum--;
//				Q.push({ i,j });
//				vis[i][j] = 1;
//				//cout << i << j;
//			}
//		}
//	}
//
//
//	
//	while (true) {	//큐 두개를 옮겨다니면서 날자를 구분한다
//	
//		day++;
//		while (!Q.empty()) {
//			pair<int, int> cur = Q.front();
//			Q.pop();
//			for (int dir = 0; dir < 4; dir++) {
//				int nx = cur.first + dx[dir];
//				int ny = cur.second + dy[dir];
//
//				if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//					continue;
//				}
//				if (vis[nx][ny] || board[nx][ny] == -1) {
//					continue;
//				}
//				vis[nx][ny] = 1;
//				Q2.push({ nx,ny });
//				zero_sum--;
//				//cout << nx << " " << ny << "\n";
//				sw = true;
//			}
//
//
//
//
//		}
//		if (sw == false) {	//한번도 활성화를 못시켰다면 더이상 진행불가
//			//cout << zero_sum;
//			if (zero_sum != 0) {
//				cout << "-1";
//				return 0;
//			}
//
//			day--;
//			cout << day;
//			break;
//		}
//		else {
//			sw = false;
//		}
//
//		day++;
//		while (!Q2.empty()) {
//			pair<int, int> cur = Q2.front();
//			Q2.pop();
//			for (int dir = 0; dir < 4; dir++) {
//				int nx = cur.first + dx[dir];
//				int ny = cur.second + dy[dir];
//
//				if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//					continue;
//				}
//				if (vis[nx][ny] || board[nx][ny] == -1) {
//					continue;
//				}
//				vis[nx][ny] = 1;
//				Q.push({ nx,ny });
//				zero_sum--;
//				//cout << nx << " " << ny << "\n";
//				sw = true;
//			}
//
//		}
//		if (sw == false) {	//한번도 활성화를 못시켰다면 더이상 진행불가
//			if (zero_sum != 0) {
//				cout << "-1";
//				return 0;
//			}
//
//			day--;
//			cout << day;
//			break;
//		}
//		else {
//			sw = false;
//		}
//
//	}
//
//
//
//
//
//
//
//}