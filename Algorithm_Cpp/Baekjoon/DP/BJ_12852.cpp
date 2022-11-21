//#include<iostream>
//using namespace std;
//
//int arr[1000005];
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
//	arr[1] = 0;
//	arr[2] = 1;
//	arr[3] = 1;
//
//
//	for (int i = 4; i <= n; i++) {
//		arr[i] = arr[i - 1] + 1;
//		if (i % 3 == 0) {
//			arr[i] = min(arr[i], arr[i/3]+1);
//		}
//		if (i % 2 == 0) {
//			arr[i] = min(arr[i], arr[i / 2] + 1);
//		}
//
//	}
//
//	cout << arr[n] << "\n";
//
//
//
//	while(true) {
//		if (n == 1) {
//			cout << "1";
//			break;
//		}
//		cout << n << " ";
//
//		
//		if (arr[n - 1] == arr[n] - 1) {
//			n = n - 1;
//		}
//		else if (n % 3 == 0 && arr[n / 3] == arr[n] - 1) {
//			n = n / 3;
//		}
//		else if (n % 2 == 0 && arr[n / 2] == arr[n] - 1) {
//			n = n / 2;
//		}
//
//
//
//
//	}
//
//
//
//
//
//
//}