//#include<iostream>
//#include<queue>
//using namespace std;
//
//
//int arr[102][102];
//int dx[4] = {1,0,-1,0 };
//int dy[4] = {0,1,0,-1 };
//int dir = 0; //���������� ������ +1 �������ε����� -1 
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
//	snake.push({ 1,1 });// ������ġ ����
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
//		arr[a][b] = 1; // ��� ��ġ
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
//			if (que.front().first == time) {	//������ȯ �ð��̶�� ������ȯ��
//				if (que.front().second == 'D') {	//����ť ���·� ����
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
//		// �����ġ 1 ����� 0 ��� ����
//		
//		//���� ���� �����̸� �÷� �Ӹ��� ����ĭ�� ��ġ��Ų��.
//			
//		
//
//
//
//		//step 1.���� �̵��� ĭ�� ����� �ִٸ�, �� ĭ�� �ִ� ����� �������� ������ �������� �ʴ´�.
//		if (arr[y + dy[dir]][x + dx[dir]] == 1) {
//			arr[y + dy[dir]][x + dx[dir]] = 0;	//����� �԰�
//			snake.push({ y + dy[dir] ,x + dx[dir] });	//���� �ø���
//			y += dy[dir];
//			x += dx[dir];
//		}
//		
//
//		//step 2.���� �̵��� ĭ�� ����� ���ٸ�, �����̸� �ٿ��� ������ ��ġ�� ĭ�� ����ش�. ��, �����̴� ������ �ʴ´�
//		else if (arr[y + dy[dir]][x + dx[dir]] == 0) {
//			snake.push({ y + dy[dir] ,x + dx[dir] });	//���� �ø���
//			queue<pair<int, int>> backup(snake);
//			while (true) {
//				if (snake.size() <= 1) {
//					snake = backup; // ��ġ�°� �����Ƿ� ������ ����
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
//			snake.pop(); //�����κ��� ����.
//			y += dy[dir];
//			x += dx[dir];
//		}
//
//
//
//		//step 2.5. ��ǥ�� ����ٸ� ����
//		if (snake.back().first== 0 || snake.back().second == 0 || snake.back().first >map_size || snake.back().second > map_size) {
//			
//			time++;
//			cout << time;
//			return 0;
//		}
//		//step 2.5. �̵���ĭ�� ������ ��ġ�� ����. ��ȿ����. �ð��ʰ� ���ɼ�����.
//		
//		queue<pair<int, int>> backup(snake);
//		
//		while (true) {
//			if (snake.size() <= 1) {
//				snake = backup; // ��ġ�°� �����Ƿ� ������ ����
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
//		time++;	//�ð�1������
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