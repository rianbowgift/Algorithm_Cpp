#include<iostream>
#include<queue>
using namespace std;


int arr[102][102];
int dx[4] = {1,0,-1,0 };
int dy[4] = {0,1,0,-1 };
int dir = 0; //���������� ������ +1 �������ε����� -1 

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int time = 0;
	int map_size, apple, move;
	queue<pair<int,char>> que;
	int x = 1, y = 1;
	arr[y][x] = 1;// ������ġ ����


	cin >> map_size;

	cin >> apple;

	for (int i = 0; i < apple; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 3; // ��� ��ġ
	}

	cin >> move;

	for (int i = 0; i < apple; i++) {
		pair<int, char> temp;
		cin >> temp.first >> temp.second;
		que.push(temp);
	}



	while (true) {
		time++;	//�ð�1������


		if (que.front().first == time) {	//������ȯ �ð��̶�� ������ȯ��
			if (que.front().second = 'D') {	//����ť ���·� ����
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


		// �Ӹ���ġ 2 ������ġ 1 �����ġ 3 ����� 4 ��� ����
		
		//step 1. ���� ���� �����̸� �÷� �Ӹ��� ����ĭ�� ��ġ��Ų��.
		arr[y + dy[dir]][x + dx[dir]] = 1;
		


		//step 2.���� �̵��� ĭ�� ����� �ִٸ�, �� ĭ�� �ִ� ����� �������� ������ �������� �ʴ´�.
		if()


		//step 3.���� �̵��� ĭ�� ����� ���ٸ�, �����̸� �ٿ��� ������ ��ġ�� ĭ�� ����ش�. ��, �����̴� ������ �ʴ´�

		




	}







}