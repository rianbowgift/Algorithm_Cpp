//#include<iostream>
//using namespace std;
//
//int main() {
//
//	string x;
//	cin >> x;
//	string result;
//	int sum = 0;
//	int min = -1;
//	for (int i = 0; i < x.length(); i++) {
//		if (x[i] == '.') {
//			while (sum > 0) {
//				if (sum >= 4) {
//					sum -= 4;
//					result += "AAAA";
//				}
//				else if (sum >= 2) {
//					sum -= 2;
//					result += "BB";
//				}
//				else {
//					cout << "-1";
//					return 0;
//				}
//			}
//
//
//			result += '.';
//			sum = 0;
//		}
//		else {
//			sum++;
//		}
//
//
//		
//
//	}
//
//	while (sum > 0) {
//		if (sum >= 4) {
//			sum -= 4;
//			result += "AAAA";
//		}
//		else if (sum >= 2) {
//			sum -= 2;
//			result += "BB";
//		}
//		else {
//			cout << "-1";
//			return 0;
//		}
//	}
//
//
//	cout << result;
//
//
//}