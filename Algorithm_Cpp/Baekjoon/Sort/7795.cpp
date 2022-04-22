//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//bool reverse_num(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//
//	cin >> n;
//
//	for (int z = 0; z < n; z++) {
//
//		int a, b;
//		int sum=0;
//		cin >> a >> b;
//		int* arr1 = new int[a];
//		int* arr2 = new int[b];
//		for (int i = 0; i < a; i++) {
//			cin >> arr1[i];
//		}
//		sort(arr1, arr1 + a, reverse_num);
//		
//		for (int i = 0; i < b; i++) {
//			cin >> arr2[i];
//		}
//
//		sort(arr2, arr2 + b);
//
//		int checker = a - 1;
//		
//		for (int i = 0; i < b; i++) {
//			for (int j = 0; j < a; j++) {
//				if (arr2[i] < arr1[j]) {
//					sum++;
//				}
//				else {
//					break;
//				}
//			}
//		}
//		
//		cout << sum << "\n";
//
//
//
//
//	}
//
//
//
//}