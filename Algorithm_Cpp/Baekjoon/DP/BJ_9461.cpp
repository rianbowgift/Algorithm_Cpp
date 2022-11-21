//#include<iostream>
//using namespace std;
//
//long long arr[1000];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	int n;
//	cin >> n;
//	arr[1] = 1;
//	arr[2] = 1;
//	arr[3] = 1;
//
//	for (int i = 4; i <= 100; i++) {
//		arr[i] = arr[i - 2] + arr[i - 3];
//	}
//
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		cout << arr[temp] << "\n";
//	}
//
//
//}