//#include<iostream>
//#include<stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a, b;
//
//	cin >> a >> b;
//	
//	
//
//
//	stack<int> s[7];
//	int sum = 0;
//	
//
//	for (int i = 0; i < a; i++) {
//
//		int x, y;
//		cin >> x >> y;
//
//		if (s[x].empty()) {
//			s[x].push(y);
//			sum++;
//		}
//		else {
//			if (s[x].top() < y) {
//				s[x].push(y);
//				sum++;
//			}
//			else {
//				while (!s[x].empty()) {
//					if (s[x].top() > y) {
//						s[x].pop();
//						sum++;
//					}
//					else if (s[x].top() == y) {
//						break;
//					}
//					else {
//						s[x].push(y);
//						sum++;
//					}
//				}
//				if (s[x].empty()) {
//					s[x].push(y);
//					sum++;
//				}
//			}
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
//
//}
//
