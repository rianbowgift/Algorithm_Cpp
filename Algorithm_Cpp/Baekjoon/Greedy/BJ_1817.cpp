//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a, b;
//	cin >> a >> b;
//	int sum = 0;
//	int maxd = b;
//
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		if (maxd - temp >= 0) {
//			maxd -= temp;
//		}
//		else {
//			sum++;
//			maxd = b - temp;
//		}
//
//
//	}
//	if (a == 0) {
//		cout << "0";
//	}
//	else {
//		cout << sum + 1;
//	}
//
//}