//#include<iostream>
//using namespace std;
//
//long long arr[100];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	for (int j = 0; j < n; j++) {
//		int temp;
//		cin >> temp;
//		arr[0] = 1;
//		arr[1] = 1;
//		arr[2] = 2;
//		arr[3] = 4;
//
//		for (int i = 4; i <= temp; i++) {
//
//			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
//
//		}
//
//		cout << arr[temp] << "\n";
//
//
//
//	}
//
//
//}