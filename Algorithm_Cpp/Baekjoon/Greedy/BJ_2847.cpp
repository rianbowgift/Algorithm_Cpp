//#include<iostream>
//
//int arr[101];
//
//using namespace std;
//int main() {
//
//	int a;
//	cin >> a;
//	int sum = 0;
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr[i] = temp;
//	}
//
//	for (int i = a - 1; i > 0; i--) {
//		while (arr[i] <= arr[i - 1]) {
//			//cout<< i << " " << arr[i - 1] << " " << "\n";
//			sum++;
//			arr[i - 1] -= 1;
//		}
//	}
//
//
//
//
//	cout << sum;
//
//
//}