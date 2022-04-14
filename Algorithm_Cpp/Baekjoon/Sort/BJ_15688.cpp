//#include<iostream>
//using namespace std;
//
//int arr[10000000];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//
//	for (int i = 1; i <= a; i++) {
//		int temp = 0;
//		cin >> temp;
//		temp += 1000001;
//		arr[temp]++;
//	}
//
//
//	int j = 1;
//	while (true) {
//
//		if (arr[j] != 0) {
//			cout << j- 1000001 << ' ';
//			arr[j] = arr[j] - 1;
//		}
//		else {
//			j++;
//		}
//
//		if (j - 1 == a+ 2000001) {
//			break;
//		}
//
//
//	}
//
//
//
//
//
//}
