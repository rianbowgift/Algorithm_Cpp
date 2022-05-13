//#include<iostream>
//using namespace std;
//
//
//int sum;
//
//
//void re(int a, int b) {
//	if (a == b) {
//		sum++;
//		return;
//	}
//
//	if (a > b) {
//		sum++;
//		re(a - b, b);
//	}
//	else {
//		sum++;
//		re(b - a, a);
//	}
//
//
//}
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	int a, b;
//	cin >> a >> b;
//
//	re(a, b);
//	cout << sum;
//
//
//}