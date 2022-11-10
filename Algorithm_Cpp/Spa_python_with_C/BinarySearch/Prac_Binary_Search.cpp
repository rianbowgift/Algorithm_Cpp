//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int arr[100002];
//
//int main() {
//	//백준 1920문제 연습
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		arr[i] = temp;
//	}
//
//	sort(arr, arr + n);
//
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//
//		int temp;
//		cin >> temp;
//
//		int st = 0;
//		int en = n - 1;
//
//		while (st <= en) {
//			int mid = (st + en) / 2;
//			if (arr[mid] < temp)
//				st = mid + 1;
//			else if (arr[mid] > temp)
//				en = mid - 1;
//			else {
//				cout << "1" << "\n";
//				break;
//			}
//
//		}
//		if (st > en) {
//			cout << "0" << "\n";
//		}
//
//
//
//	}
//
//
//}