#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	vector<int> park; //������ �ڸ��� ����
	vector<int> car;	//���� ���԰� ����
	queue<int> car_q;	//���� ���Լ��� ����
	queue<int> wait_q;
	int sum = 0;	//���� �հ� 
	cin >> n >> m;
	int* point = new int[n];	//�ڸ� �����ϰ��ִ��� �˻�
	for (int i = 0; i < n; i++) {
		point[i] = 0;
	}
	bool is_full = false;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		park.push_back(temp);
	}
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		car.push_back(temp);
	}
	for (int i = 0; i < 2 * m; i++) {
		int temp;
		cin >> temp;
		car_q.push(temp);
	}


	
	while (!car_q.empty() || !wait_q.empty() ) {
		cout << sum << "\n";
		int front = 0;
		










	




		
		
		
		if (front > 0) {		//���������̸�
			for (int i = 0; i < n; i++) {
				if (point[i] == 0) {
					point[i] = front;
					sum += park[i] * car[front - 1];
					break;
				}
			}
		}
		else {		//���������̸�
			for (int i = 0; i < n; i++) {	//point���� �ش�������ġ Ž���� ���� 
				if (point[i] == abs(front)) {
					point[i] = 0;
					break;
				}
			}
		}



		int temp_point = 0;		//������ Ǯ���� �˻� 
		for (int i = 0; i < n; i++) {
			if (point[i] > 0) {
				temp_point++;
			}
		}
		if (temp_point == n) {
			is_full = true;
		}
		else {
			is_full = false;
		}
		

	}


	cout << sum;



}

