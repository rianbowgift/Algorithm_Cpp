//#include<iostream>
//
//using namespace std;
//
//int arr[1005];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, k;
//
//	cin >> n >> k;
//
//	for (int i = 2; i <= n; i++) {
//		arr[i] = i;
//	}
//
//	int count = 0;
//
//
//		for (int j = 2; j <= n; j++) {
//			if (arr[j] != 0) {
//				int x = arr[j];
//				int backup = arr[j];
//				while (x <= n) {
//					if (arr[x] == 0) {
//						x += backup;
//						continue;
//					}
//					count++;
//					if (count == k) {
//						cout << x;
//						return 0;
//					}
//					//cout << arr[x] << "\n";
//					arr[x] = 0;
//					x += backup;
//
//				}
//			}
//		}
//
//
//
//
//}