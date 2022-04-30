//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//int arr[102][102];
//int dx[4] = {1,0,-1,0 };
//int dy[4] = {0,1,0,-1 };
//int dir = 0; //오른쪽으로 돌릴땐 +1 왼쪽으로돌릴땐 -1 
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int time = 0;
//	int map_size, apple, move;
//	queue<pair<int,char>> que;
//	queue< pair<int, int>> snake;
//	int x = 1, y = 1;
//	snake.push({ 1,1 });// 시작위치 삽입
//	
//
//
//	cin >> map_size;
//
//	cin >> apple;
//
//	for (int i = 0; i < apple; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a][b] = 1; // 사과 위치
//	}
//
//	cin >> move;
//
//	for (int i = 0; i < move; i++) {
//		pair<int, char> temp;
//		cin >> temp.first >> temp.second;
//		que.push(temp);
//	}
//
//	
//
//
//
//	while (true) {
//
//		if (!que.empty()) {
//			if (que.front().first == time) {	//방향전환 시간이라면 방향전환함
//				if (que.front().second == 'D') {	//원형큐 형태로 구현
//
//					if (dir == 3) {
//						dir = 0;
//					}
//					else {
//						dir++;
//					}
//				}
//				else {
//					if (dir == 0) {
//						dir = 3;
//					}
//					else {
//						dir--;
//					}
//				}
//				que.pop();
//			}
//		}
//
//		// 사과위치 1 빈공간 0 라고 정의
//		
//		//먼저 뱀은 몸길이를 늘려 머리를 다음칸에 위치시킨다.
//			
//		
//
//
//
//		//step 1.만약 이동한 칸에 사과가 있다면, 그 칸에 있던 사과가 없어지고 꼬리는 움직이지 않는다.
//		if (arr[y + dy[dir]][x + dx[dir]] == 1) {
//			arr[y + dy[dir]][x + dx[dir]] = 0;	//사과를 먹고
//			snake.push({ y + dy[dir] ,x + dx[dir] });	//길이 늘린다
//			y += dy[dir];
//			x += dx[dir];
//		}
//		
//
//		//step 2.만약 이동한 칸에 사과가 없다면, 몸길이를 줄여서 꼬리가 위치한 칸을 비워준다. 즉, 몸길이는 변하지 않는다
//		else if (arr[y + dy[dir]][x + dx[dir]] == 0) {
//			snake.push({ y + dy[dir] ,x + dx[dir] });	//길이 늘리고
//			queue<pair<int, int>> backup(snake);
//			while (true) {
//				if (snake.size() <= 1) {
//					snake = backup; // 겹치는게 없으므로 복구후 종료
//					break;
//				}
//				if (snake.back() == snake.front()) {
//					time++;
//					cout << time;
//					return 0;
//				}
//				else {
//					snake.pop();
//				}
//
//			}
//
//
//
//
//
//
//
//			snake.pop(); //꼬리부분을 뺀다.
//			y += dy[dir];
//			x += dx[dir];
//		}
//
//
//
//		//step 2.5. 좌표를 벗어났다면 종료
//		if (snake.back().first== 0 || snake.back().second == 0 || snake.back().first >map_size || snake.back().second > map_size) {
//			
//			time++;
//			cout << time;
//			return 0;
//		}
//		//step 2.5. 이동한칸이 꼬리와 겹치면 종료. 비효율적. 시간초과 가능성있음.
//		
//		queue<pair<int, int>> backup(snake);
//		
//		while (true) {
//			if (snake.size() <= 1) {
//				snake = backup; // 겹치는게 없으므로 복구후 종료
//				break;
//			}
//			if (snake.back() == snake.front()) {
//				time++;
//				cout << time;
//				return 0;
//			}
//			else {
//				snake.pop();
//			}
//			
//		}
//		
//		
//
//
//
//		time++;	//시간1초증가
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
//}