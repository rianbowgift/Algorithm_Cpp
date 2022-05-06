//#include<iostream>
//#include<queue>
//#include <string>
//#include <vector>
//#include<stack>
//using namespace std;
//
//queue <int> Q;
//
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//
//
//	for (int i = 0; i < progresses.size(); i++) {
//		int temp = progresses[i];
//		int x = 0;
//
//		while (true) {
//			if (temp >= 100) {
//				break;
//			}
//			temp += speeds[i];
//			x++;
//		}
//		Q.push(x);
//
//	}
//
//	
//	while (!Q.empty()) {
//		int x = 1;
//		int temp = Q.front();
//		Q.pop();
//
//
//
//		while (true) {
//			if (Q.empty()) {
//				answer.push_back(x);
//				break;
//			}
//
//			if (Q.front() <= temp) {
//				x++;
//				Q.pop();
//			}
//			else {
//				answer.push_back(x);
//				break;
//			}
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
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i];
//		if (!(answer.size()-1 == i)) {
//			cout << ", ";
//		}
//	}
//	
//
//
//
//
//
//	return answer;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<int> pro = { 95, 90, 99, 99, 80, 99 };
//	vector<int> speeds = { 1, 1, 1, 1, 1, 1 };
//
//	solution(pro, speeds);
//
//	
//
//
//
//
//}