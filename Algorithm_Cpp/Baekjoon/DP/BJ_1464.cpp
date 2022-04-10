//#include<iostream>
//using namespace std;
//
//int sum[1000002];
//
//
//int main() {
//	int a;
//
//	cin >> a;
//
//
//	sum[1] = 1;
//	sum[2] = 1;
//	sum[3] = 1;
//	if (a == 1) {
//		cout << "0";
//		return 0;
//	}
//	
//	if (a <= 3) {
//		cout << "1";
//		return 0;
//	}
//
//
//	for (int i = 4; i <= a; i++) {
//		if (i % 3 == 0) {
//
//
//			sum[i] = min(sum[i / 3], sum[i - 1]) + 1;
//			
//		}
//		if (i % 2 == 0) {
//			
//			if (i % 3 == 0) {
//				sum[i] = min(min(sum[i / 2], sum[i - 1]), sum[i / 3]) +1;
//				continue;
//			}
//			
//			sum[i] =  min(sum[i/2],sum[i-1]) +1;
//		}
//		if (i % 3 != 0 && i % 2 != 0) {
//			sum[i] = sum[i - 1] + 1;
//		}
//		
//
//
//	}
//
//	cout << sum[a];
//
//
//
//}