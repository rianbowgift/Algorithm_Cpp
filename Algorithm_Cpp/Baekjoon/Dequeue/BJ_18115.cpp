//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	deque<int> dq;
//	deque<int> move; //명령기술
//	deque<int> answer;
//	
//	int n;
//
//	cin >> n;
//
//
//	for (int i = 0; i<n; i++) {
//		dq.push_front(i + 1);
//		int temp;
//		cin >> temp;
//		move.push_back(temp);	//명령기술 삽입
//	}
//
//
//	while (!move.empty()) {
//		int cmd = move.back();
//		move.pop_back();
//		
//
//		if (cmd == 1) {
//			int temp = dq.back();
//			dq.pop_back();
//			answer.push_front(temp);
//		}
//		else if (cmd == 2) {
//			int temp = dq.back();
//			dq.pop_back();
//			int temp2 = answer.front();
//			answer.pop_front();
//			answer.push_front(temp);
//			answer.push_front(temp2);
//
//
//		}
//		else {
//			int temp = dq.back();
//			dq.pop_back();
//			answer.push_back(temp);
//
//		}
//
//	}
//	
//	
//	for (int i = 0; i < n; i++) {
//		cout << answer[i] << " ";
//	}
//
//
//
//
//
//}