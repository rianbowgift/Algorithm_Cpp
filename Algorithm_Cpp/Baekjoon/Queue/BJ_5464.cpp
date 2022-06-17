#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	vector<int> park; //주차장 자리값 저장
	vector<int> car;	//차량 무게값 저장
	queue<int> car_q;	//차량 진입순서 저장
	queue<int> wait_q;
	int sum = 0;	//번돈 합계 
	cin >> n >> m;
	int* point = new int[n];	//자리 차지하고있는지 검사
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
		










	




		
		
		
		if (front > 0) {		//진입차량이면
			for (int i = 0; i < n; i++) {
				if (point[i] == 0) {
					point[i] = front;
					sum += park[i] * car[front - 1];
					break;
				}
			}
		}
		else {		//진출차량이면
			for (int i = 0; i < n; i++) {	//point에서 해당차량위치 탐색후 제거 
				if (point[i] == abs(front)) {
					point[i] = 0;
					break;
				}
			}
		}



		int temp_point = 0;		//주차장 풀인지 검사 
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

