//#include<iostream>
//#include<queue>
//using namespace std;
//
//char board[1005][1005];
//bool via[1005][1005];
//int counter[1005][1005];
//int j_counter[1005][1005];
//int j_vis[1005][1005];
//int n, m;
//bool sw = false;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//
//	cin >> n >> m;
//	queue<pair<int, int>> Q;
//	queue<pair<int, int>> Q2;
//	queue<pair<int, int>> man;
//
//
//	for (int i = 0; i < n; i++) {
//		string temp;
//		cin >> temp;
//		for (int j = 0; j < m; j++) {
//			board[i][j] = temp[j];
//			
//			if (temp[j] == 'F') {
//				Q.push({ i,j });
//				via[i][j] = 1;
//				//counter[i][j] = 0;
//			}
//			if (temp[j] == 'J') {
//				man.push({ i,j });
//				//j_counter[i][j] = 0;
//				j_vis[i][j] = 1;
//			}
//
//
//		}
//	}
//
//
//	while (true) {
//
//		while (!Q.empty()) {
//			pair<int, int> cur = Q.front();
//			Q.pop();
//
//			for (int dir = 0; dir < 4; dir++) {
//
//				int nx = cur.first + dx[dir];
//				int ny = cur.second + dy[dir];
//
//				if (board[nx][ny] == '#') {
//					continue;
//				}
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//					continue;
//				}
//				if (via[nx][ny] ) {
//					continue;
//				}
//				
//				Q2.push({ nx,ny });
//				via[nx][ny] = 1;
//				counter[nx][ny] = counter[cur.first][cur.second] + 1;
//				sw = true;
//			}
//
//
//		}
//
//
//
//
//		while (!Q2.empty()) {
//			pair<int, int> cur = Q2.front();
//			Q2.pop();
//
//			for (int dir = 0; dir < 4; dir++) {
//
//				int nx = cur.first + dx[dir];
//				int ny = cur.second + dy[dir];
//
//				if (board[nx][ny] == '#') {
//					continue;
//				}
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m) {
//					continue;
//				}
//				if (via[nx][ny]) {
//					continue;
//				}
//
//				Q.push({ nx,ny });
//				via[nx][ny] = 1;
//				counter[nx][ny] = counter[cur.first][cur.second] + 1;
//				sw = true;
//			}
//
//		}
//
//		if (sw == false) {
//			break;
//		}
//		else {
//			sw = false;
//		}
//
//		
//
//
//
//	}
//
//
//
//	while (!man.empty()) {
//		
//		pair<int, int> cur = man.front();
//		man.pop();
//
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//
//
//			cout << nx << " " << ny << " " << counter[nx][ny] << " " << j_counter[nx][ny] << "\n";
//			if (board[nx][ny] == '#') {
//				continue;
//			}
//
//
//			if (counter[nx][ny] <= j_counter[nx][ny] ) {
//				continue;
//			}
//			if (nx < 0 || ny < 0 ){
//				continue;
//			}
//			if (j_vis[nx][ny]) {
//				continue;
//			}
//			if (nx >= n || ny >= m) {
//				cout << j_counter[cur.first][cur.second] + 1;
//				return 0;
//			}
//
//			man.push({ nx,ny });
//			j_vis[nx][ny] = 1;
//			j_counter[nx][ny] = j_counter[cur.first][cur.second] + 1;
//
//
//
//		}
//
//
//	}
//
//	cout << "IMPOSSIBLE";
//
//
//
//	
//
//
//
//
//}