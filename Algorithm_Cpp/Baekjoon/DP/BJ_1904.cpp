//#include<iostream>
//using namespace std;
//
//long long arr[1000005];
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	arr[1] = 1;
//	arr[2] = 2;
//
//	for (int i = 3; i <= n; i++) {
//		arr[i] = (arr[i - 1] % 15746) + (arr[i - 2] % 15746);
//		
//		if (arr[i] >= 15746) {
//			arr[i] = arr[i] % 15746;
//		}
//	}
//
//	cout << arr[n];
//
//
//
//}