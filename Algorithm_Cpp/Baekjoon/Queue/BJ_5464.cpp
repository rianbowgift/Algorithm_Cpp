//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n,m;
//	vector<int> park; //������ �ڸ��� ����
//	vector<int> car;	//���� ���԰� ����
//	queue<int> car_q;	//���� ���Լ��� ����
//	queue<int> wait_q;
//	int sum = 0;	//���� �հ� 
//	cin >> n >> m;
//	int* point = new int[n];	//�ڸ� �����ϰ��ִ��� �˻�
//	for (int i = 0; i < n; i++) {
//		point[i] = 0;
//	}
//	bool is_full = false;
//
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		park.push_back(temp);
//	}
//	for (int i = 0; i < m; i++) {
//		int temp;
//		cin >> temp;
//		car.push_back(temp);
//	}
//	for (int i = 0; i < 2 * m; i++) {
//		int temp;
//		cin >> temp;
//		car_q.push(temp);
//	}
//
//
//	
//
//		while (!car_q.empty() || !wait_q.empty()) {		//���� �Ѱ��� �Ⱥ���ִٸ� 
//
//			int front;
//			if (car_q.empty() || (!is_full && !wait_q.empty())) {
//				//�Ϲ�ť�� ����ų�
//				//�����忡 ������̻���µ� ��Ⱑ�ִٸ� ��⿭ 1����ó��
//				
//				
//				front = wait_q.front();
//				wait_q.pop();
//			}
//			else {
//				if (car_q.front() < 0) {	//���� ���������� �ٷ� ó��
//
//					front = car_q.front();
//					car_q.pop();
//				}
//				else {	//���� ���Ë� Ǯ���� �ƴ��� �Ǵ� 
//					if (is_full == true) {
//						//Ǯ�ε� ������ ���Դٸ� ���ť�� ����
//						wait_q.push(car_q.front());
//						car_q.pop();
//						continue;
//					}
//					else {
//						//Ǯ�� �ƴ϶�� ���� ���Խ� ���ť�� �Ϲ�ť�� ����
//						if (!wait_q.empty()) {
//							//��⿭�� �����ϸ� ��⿭�켱 ����
//							front = wait_q.front();
//							wait_q.pop();
//						}
//						else {
//							//��⿭ ������ �ٷ� ����
//							front = car_q.front();
//							car_q.pop();
//						}
//					}
//
//
//				}
//			}
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
//		if (front > 0) {		//���������̸�
//			for (int i = 0; i < n; i++) {
//				if (point[i] == 0) {
//					point[i] = front;
//					sum += park[i] * car[front - 1];
//					break;
//				}
//			}
//		}
//		else {		//���������̸�
//			for (int i = 0; i < n; i++) {	//point���� �ش�������ġ Ž���� ���� 
//				if (point[i] == abs(front)) {
//					point[i] = 0;
//					break;
//				}
//			}
//		}
//
//
//
//		int temp_point = 0;		//������ Ǯ���� �˻� 
//		for (int i = 0; i < n; i++) {
//			if (point[i] > 0) {
//				temp_point++;
//			}
//		}
//		if (temp_point == n) {
//			is_full = true;
//		}
//		else {
//			is_full = false;
//		}
//		
//
//	}
//
//
//	cout << sum;
//
//
//
//}
//
