//#include<iostream>
//using namespace std;
//
//int arr[50];
//int vips[50];
//int main() {
//
//	int size;
//	cin >> size;
//	int vip;
//	cin >> vip;
//	
//	//피보나치 + vip고정좌석으로 분리계산
//	arr[0] = 1;
//	arr[1] = 1;
//
//	for (int i = 2; i <= size; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//
//	for (int i = 1; i <= vip; i++) {
//		cin >> vips[i];
//	}
//
//	int sum = 1;
//	for (int i = 1; i <= vip; i++) {
//		sum *= arr[vips[i] - vips[i - 1]-1];
//
//
//	}
//	sum *= arr[size - vips[vip]];
//	cout << sum;
//
//
//}