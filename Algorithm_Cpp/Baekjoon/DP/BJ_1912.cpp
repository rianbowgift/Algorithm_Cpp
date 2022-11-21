//#include<iostream>
//using namespace std;
//
//int arr[100005];
//int sum[100005];
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//
//	int n;
//	cin >> n;
//	
//
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	sum[0] = arr[0];
//	int max = sum[0];
//	
//	for (int i = 1; i < n; i++) {
//		sum[i] = sum[i - 1] + arr[i];
//		if (sum[i] < arr[i]) {
//			sum[i] = arr[i];
//		}
//		if (max < sum[i]) {
//			max = sum[i];
//		}
//	}
//
//
//
//
//	cout << max;
//
//
//
//}