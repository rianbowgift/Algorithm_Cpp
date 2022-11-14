//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//
//
//int board[500][500];	//실제판
//bool vis[500][500];	// 노드방문여부기록
//int n = 10,m = 20;
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	//1.큐생성
//	//2.시작지점에 방문여부체크
//	//3. 시작지점 큐에 삽입
//
//	queue<pair<int, int>> Q;
//	vis[0][0] = 1;
//	Q.push({ 0,0 });
//
//
//	while (!Q.empty()) {
//		//1.현재 지점을 cur에 저장
//		//2.저장한 지점을 큐에서 제거
//		pair<int, int> cur = Q.front();
//		Q.pop();
//
//		//1.for문으로 밑,오른쪽,위,왼쪽 순서로 탐색(순서상관X)
//		//2.nx와 ny에 현재지점+ 밑,오른쪽,위,왼쪽 순서로 좌표지정
//		for (int dir = 0; dir < 4; dir++) {	
//			int nx = cur.first + dx[dir];
//			int ny = cur.second + dy[dir];
//
//			//1.현재좌표의 x또는 y가 0보다 작아젔거나
//			//   현재좌표가 최대크기인 n이나 m보다 크거나 작다면(좌표는0부터이므로)
//			//    Continue. 즉 범위안에 들어오는지 체크
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//				continue;
//			}
//			
//			//0.앞의조건은 bool조건, 뒤의조건은 int
//			//   따라서 앞의조건은 1일떄만족, 뒤의조건은 0일떄 만족
//			//1.만약 nx,ny좌표를 입력한vis가 1이면, 즉
//			//   이미 방문한적이 있으면 PASS.
//			// OR
//			//2.만약 nx,ny좌표를 입력한 board가 0이면, 즉
//			//   지정한 범위 밖인경우 PASS
//			if (vis[nx][ny] || board[nx][ny] != 1) {
//				continue;
//			}
//			
//			//1. nx,ny좌표에 방문표시
//			//2. Q에 현재좌표 삽입
//			vis[nx][ny] = 1;
//			Q.push({ nx,ny });
//
//			//주의 !큐에 넣을때 표시를해야한다. 
//			// 큐에서 뺄때 표시하면 여러번표시해서
//			//  시간초과가능성 높음
//
//
//		}
//
//		
//	}
//
//
//
//
//}