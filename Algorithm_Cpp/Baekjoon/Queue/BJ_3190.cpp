#include<iostream>
#include<queue>
using namespace std;


int arr[102][102];
int dx[4] = {1,0,-1,0 };
int dy[4] = {0,1,0,-1 };
int dir = 0; //오른쪽으로 돌릴땐 +1 왼쪽으로돌릴땐 -1 

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int time = 0;
	int map_size, apple, move;
	queue<pair<int,char>> que;
	int x = 1, y = 1;
	arr[y][x] = 1;// 시작위치 삽입


	cin >> map_size;

	cin >> apple;

	for (int i = 0; i < apple; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 3; // 사과 위치
	}

	cin >> move;

	for (int i = 0; i < apple; i++) {
		pair<int, char> temp;
		cin >> temp.first >> temp.second;
		que.push(temp);
	}



	while (true) {
		time++;	//시간1초증가


		if (que.front().first == time) {	//방향전환 시간이라면 방향전환함
			if (que.front().second = 'D') {	//원형큐 형태로 구현
				if (dir == 3) {
					dir = 0;
				}
				else {
					dir++;
				}
			}
			else {
				if (dir == 0) {
					dir = 3;
				}
				else {
					dir--;
				}
			}
		}


		// 머리위치 2 꼬리위치 1 사과위치 3 빈공간 4 라고 정의
		
		//step 1. 먼저 뱀은 몸길이를 늘려 머리를 다음칸에 위치시킨다.
		arr[y + dy[dir]][x + dx[dir]] = 1;
		


		//step 2.만약 이동한 칸에 사과가 있다면, 그 칸에 있던 사과가 없어지고 꼬리는 움직이지 않는다.
		if()


		//step 3.만약 이동한 칸에 사과가 없다면, 몸길이를 줄여서 꼬리가 위치한 칸을 비워준다. 즉, 몸길이는 변하지 않는다

		




	}







}