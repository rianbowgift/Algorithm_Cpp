//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int arr[500001];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int a;
//	cin >> a;
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr[i] = temp;
//	}
//
//	sort(arr, arr + a);
//	int b;
//	cin >> b;
//	for (int i = 0; i < b; i++) {
//		int temp;
//		cin >> temp;
//
//
//		
//		//가장 높은 위치값
//		int st1 = 0;
//		int en1 = a;
//		while (st1 < en1) {
//			int mid = (st1 + en1) / 2;
//			if (arr[mid] > temp) {
//				en1 = mid;
//			}
//			else {
//				st1 = mid + 1;
//			}
//		}
//
//
//		//가장 낮은 위치값
//		int st2 = 0;
//		int en2 = a;
//		while (st2 < en2) {
//			int mid = (st2 + en2) / 2;
//			if (arr[mid] >= temp) {
//				en2 = mid;
//			}
//			else {
//				st2 = mid + 1;
//			}
//		}
//
//		cout << st1 - st2 << "\n";
//
//
//	}
//
//
//	
//
//
//}