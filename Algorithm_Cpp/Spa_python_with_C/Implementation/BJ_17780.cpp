//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//
//
//
//int board[50][50];	//실제판
//int n = 10,k = 20;
//int dx[5] = { 0,0,0,-1,1 };		//dx dy 둘다 0은안쓴다
//int dy[5] = { 0,1,-1,0,0 };
//int turn = 0;	//현재 턴을 저장
//
//int white() {
//
//}
//
//int red() {
//
//}
//
//int blue() {
//
//
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	//첫번째 백터에는 순서대로 x,y,방향,index
//	//두번째 queue에는 현재 유닛쌓인순서(비어있을수있음)
//	vector<vector<int>,queue<int>> unit;
//	
//
//	
//
//	cin >> n;
//	cin >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i <= k; i++) {
//		for (int j = 0; j < 3; j++) {
//			//순서대로 0=x위치(세로) 1=y위치 2=way를넣는다
//			cin >> unit[i][j];
//		}
//		unit[i][4] = i + 1;	//마지막으로 index삽입
//
//	}
//
//	
//	//턴이 1000보다크거나 절대로 종료되지않으면 -1
//	while (true) {
//
//
//		//
//		for (int i = 0; i < n; i++) {
//			int temp_x, temp_y;
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
//
//
//
//
//}