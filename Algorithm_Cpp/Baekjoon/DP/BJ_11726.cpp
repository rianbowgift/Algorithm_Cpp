//#include<iostream>
//using namespace std;
//
//long long sum[1002];
//int main() {
//	
//	int n;
//
//	cin >> n;
//
//
//	sum[1] = 1;
//	sum[2] = 2;
//	sum[3] = 3;
//
//
//	for (int i = 4; i <= n; i++) {
//		sum[i] = (sum[i - 1] + sum[i - 2])%10007;
//	}
//	
//
//	cout << sum[n];
//
//
//
//}