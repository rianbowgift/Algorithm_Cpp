//#include<iostream>
//
//using namespace std;
//
//
//long long arr[100];
//long long sum[100];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	
//	int n;
//	cin >> n;
//
//	arr[1] = 1;
//	arr[2] = 1;
//	sum[0] = 1;
//	sum[1] = 1;
//	sum[2] = 3;
//
//
//	for (int i = 3; i <= n; i++) {
//		arr[i] = (arr[i - 1]%1000000007 + arr[i - 2] % 1000000007) % 1000000007;
//		sum[i] = (sum[i - 1] + sum[i - 2] + 1) % 1000000007;
//	}
//
//	cout << sum[n];
//}