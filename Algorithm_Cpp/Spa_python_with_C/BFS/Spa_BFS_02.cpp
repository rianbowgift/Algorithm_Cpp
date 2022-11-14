//#include<iostream>
//using namespace std;
//
//
//
//
//int board[500][500];	//실제판
//bool vis[500][500];	// 노드방문여부기록
//int n = 10,m = 20;
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//int status;
//int sum;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//
//	cin >> n;
//	cin >> m;
//	int x, y;
//	cin >> x >> y >> status;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//		}
//	}
//
//
//	//1.큐생성
//	//2.시작지점에 방문여부체크
//	//3. 시작지점 큐에 삽입
//
//	//queue<pair<int, int>> Q;
//	//vis[x][y] = 1;
//	//Q.push({x,y });
//
//
//	while (true) {	//1번조건
//		//현재 위치를 청소한다
//		vis[x][y] = 1;		//1=청소됨
//		sum++;	//청소한칸의 갯수 증가
//		int check = 0;	//4방향을 모두 검사했는지 체크
//		while (true) {	//2번조건
//			check++;
//			if (check == 5) {
//				//네방향 모두 청소가 되어있거나 벽인경우
//				// 바라보는 방향을 유지한태 한칸 후진하고 2번으로돌아감
//				
//				//일단 뒤로 돌려서 전진시켜보고 조건대입후 안되면 back
//				for (int i = 0; i < 2; i++) {
//					if (status == 0) {
//						status = 3;
//					}
//					else {
//						status--;
//					}
//				}
//				x = x + dx[status];
//				y = y + dy[status];
//				
//
//				//현재위치가 벽이거나 맵을 나갔으면 작동멈춤
//				if (board[x][y] == 1 || x  < 0 || y + dy[status]<0 ||
//					x  >= n || y  >= m) {
//
//					cout << sum;
//					return 0;
//					
//				}
//				//작동가능하면 작동함
//				else {
//					check = 0;
//					// 360도돌려서 원상태로복구시킴
//					for (int i = 0; i < 2; i++) {
//						if (status == 0) {
//							status = 3;
//						}
//						else {
//							status--;
//						}
//					}
//					continue;
//				}
//
//			}
//
//			//왼쪽방향 위치구하기
//			if (status == 0) {
//				status = 3;
//			}
//			else {
//				status--;
//			}
//			//현재기준 왼쪽이 벽이거나 && 청소 했으면
//			if (board[x + dx[status]][y + dy[status]] == 1 ||
//				vis[x + dx[status]][y + dy[status]] == 1) {
//				continue;
//			}
//			//보드범위 밖으로 나가면 
//			if (x+dx[status] < 0 || y+dy[status]<0 || 
//				x+dx[status]>=n || y+dy[status] >= m) {
//				continue;
//			}
//			// 위의 조건들을 만족안하면좌표를 옮기고 그곳을 청소한다 
//			x = x + dx[status];
//			y = y + dy[status];
//			break;
//
//
//
//			
//
//
//		}
//		
//
//
//	}
//
//
//
//
//
//
//}