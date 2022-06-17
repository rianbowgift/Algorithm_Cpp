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
//	vector<int> park; //주차장 자리값 저장
//	vector<int> car;	//차량 무게값 저장
//	queue<int> car_q;	//차량 진입순서 저장
//	queue<int> wait_q;
//	int sum = 0;	//번돈 합계 
//	cin >> n >> m;
//	int* point = new int[n];	//자리 차지하고있는지 검사
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
//		while (!car_q.empty() || !wait_q.empty()) {		//둘중 한개라도 안비어있다면 
//
//			int front;
//			if (car_q.empty() || (!is_full && !wait_q.empty())) {
//				//일반큐가 비었거나
//				//주차장에 빈공간이생겼는데 대기가있다면 대기열 1순위처리
//				
//				
//				front = wait_q.front();
//				wait_q.pop();
//			}
//			else {
//				if (car_q.front() < 0) {	//차가 빠저나갈땐 바로 처리
//
//					front = car_q.front();
//					car_q.pop();
//				}
//				else {	//차가 들어올떈 풀인지 아닌지 판단 
//					if (is_full == true) {
//						//풀인데 새차가 들어왔다면 대기큐에 삽입
//						wait_q.push(car_q.front());
//						car_q.pop();
//						continue;
//					}
//					else {
//						//풀이 아니라면 새차 진입시 대기큐와 일반큐중 선택
//						if (!wait_q.empty()) {
//							//대기열이 존재하면 대기열우선 진입
//							front = wait_q.front();
//							wait_q.pop();
//						}
//						else {
//							//대기열 없으면 바로 진입
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
//		if (front > 0) {		//진입차량이면
//			for (int i = 0; i < n; i++) {
//				if (point[i] == 0) {
//					point[i] = front;
//					sum += park[i] * car[front - 1];
//					break;
//				}
//			}
//		}
//		else {		//진출차량이면
//			for (int i = 0; i < n; i++) {	//point에서 해당차량위치 탐색후 제거 
//				if (point[i] == abs(front)) {
//					point[i] = 0;
//					break;
//				}
//			}
//		}
//
//
//
//		int temp_point = 0;		//주차장 풀인지 검사 
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
