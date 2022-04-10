//#include<iostream>
//using namespace std;
//
//int sum[302];	//해당계단의 총점수
//int step[302];	//해당계단의 계단점수
//int main() {
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> step[i];
//	}
//
//
//	sum[1] = step[1];
//	sum[2] = step[1] + step[2];
//
//
//
//	for (int i = 3; i <= n; i++) {
//
//		sum[i] = max(sum[i-2],sum[i-1]) + step[i];
//		
//		if (sum[i] == sum[i-2] + step[i-1] + step[i]) {
//			
//			if (step[i - 2] > step[i - 1]) {
//				sum[i] = sum[i - 2] + step[i];
//			}
//			else {
//				sum[i] = sum[i - 1] + step[i];
//			}
//			
//		}
//
//		
//	}
//
//
//	//for (int i = 0; i <= n; i++) {
//	//	cout << sum[i] << "\n";
//	//}
//
//	cout << sum[n];
//
//
//	return 0;
//}