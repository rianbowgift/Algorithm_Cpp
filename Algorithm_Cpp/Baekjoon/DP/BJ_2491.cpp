
























//#include<iostream>
//using namespace std;
//
//int arr[200000];	//숫자가 담긴배열
//int arr2[200000];	//연속되게 커지는 숫자 저장
//int arr3[200000];	//연속되게 작아지는 숫자 저장
//
//int main() {
//
//	int n;
//	cin >> n;
//	int sum = 1;
//	arr[0] = 0;
//	arr2[0] = 0;
//	arr3[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//
//	}
//
//	for (int i = 1; i <= n; i++) {
//
//		if (arr[i - 1] < arr[i]) {
//			arr2[i] = arr2[i - 1] + 1;
//			if (arr2[i] >= sum) {
//				sum = arr2[i];
//			}
//		}
//		else if(arr[i-1] > arr[i]) {
//			arr3[i] = arr3[i - 1] + 1;
//			if (arr3[i] >= sum) {
//				sum = arr3[i];
//			}
//		}
//		else {
//			arr3[i] = arr3[i - 1] + 1;
//			arr2[i] = arr2[i - 1] + 1;
//			sum++;
//		}
//	}
//
//	cout << sum;
//
//
//}