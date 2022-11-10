//#include<iostream>
//#include<stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string a;
//	cin >> a;
//	stack<int> st;
//	int sum = 0;
//
//	for (int i = 0; i < a.size(); i++) {
//		// [ -9    ] -7		( -60    ) -59
//		//int ������ �����Ͽ� ���
//		st.push(a[i]-100);
//		
//		if (st.top() == -59) {
//			st.pop();
//			int save = 0;
//			while (true) {
//				if (st.empty()) {
//					cout << "0";
//					return 0;
//				}
//				if (st.top() == -7 || st.top() == -9) {
//					cout << "0";
//					return 0;
//				}
//				
//				if (st.top() == -60) {
//					st.pop();
//					if (save != 0) {
//						st.push(save * 2);
//					}
//					else {
//						st.push(2);
//					}
//					break;
//					
//				}
//				else {
//					save += st.top();
//					st.pop();
//				}
//			}
//		}
//		else if (st.top() == -7) {
//			st.pop();
//			int save = 0;
//			while (true) {
//				if (st.empty()) {
//					cout << "0";
//					return 0;
//				}
//				if (st.top() == -60 || st.top() == -59) {
//					cout << "0";
//					return 0;
//				}
//				
//				if (st.top() == -9) {
//					st.pop();
//					if (save != 0) {
//						st.push(save * 3);
//					}
//					else {
//						st.push(3);
//					}
//					break;
//
//				}
//				else {
//					save += st.top();
//					st.pop();
//				}
//			}
//		}
//	
//
//	}
//
//
//	while (!st.empty()) {
//		if (st.top() == -9 || st.top() == -7 || st.top() == -59 || st.top() == -60) {
//			cout << "0";
//			return 0;
//		}
//
//		sum += st.top();
//		st.pop();
//
//	}
//	cout << sum;
//
//
//}