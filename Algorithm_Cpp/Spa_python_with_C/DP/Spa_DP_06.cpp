//#include<iostream>
//using namespace std;
//
//int arr[100005];
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, k;
//	cin >> n >> k;
//	arr[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		int temp;
//		cin >> temp;
//		arr[i] = arr[i - 1] + temp;
//	}
//
//	for (int i = 0; i < k; i++) {
//		int x, y;
//		cin >> x >> y;
//
//		cout << arr[y] - arr[x-1] << "\n";
//
//
//	}
//
//
//}