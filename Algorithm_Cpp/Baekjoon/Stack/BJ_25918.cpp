//#include<iostream>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	string b;
//	string c = "";
//	cin >> a >> b;
//	int sum = 0;
//
//	char back = b[0];
//
//	int check = 0;
//	for (int i = 0; i < a; i++) {
//		if (b[i] == '(') {
//			check++;
//		}
//	}
//	if (check*2 != b.size()) {
//		cout << "-1";
//		return 0;
//	}
//	if (b.size() % 2 != 0) {
//		cout << "-1";
//		return 0;
//	}
//
//
//	while (true) {
//		if (sum == 1) {
//			cout << "";
//		}
//		for (int i = 1; i < b.length(); i++) {
//			if (back == '-') {
//				back = b[i];
//				if (i == b.length() - 1) {
//					c += back;
//				}
//				continue;
//			}
//			if (back == b[i]) {
//				back = b[i];
//				c += back;
//			}
//			else {
//				back = '-';
//			}
//		}
//		sum++;
//		if (c.length() == 0) {
//			break;
//		}
//
//		if (c.length() == b.length()) {
//			cout << "-1";
//			return 0;
//		}
//		if (c.length() % 2 != 0) {
//			cout << "-1";
//			return 0;
//		}
//		b = c;
//		c = "";
//		back = b[0];
//		
//	}
//	
//	cout << sum;
//	
//	
//
//}