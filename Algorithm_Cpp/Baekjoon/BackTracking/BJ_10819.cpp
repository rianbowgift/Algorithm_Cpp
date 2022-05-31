//#include<iostream>
//using namespace std;
//
//int n;
//int arr[10];
//bool isused[10];
//int sum;
//int nums[10];
//
//
//void re(int a) {
//	if (a == n) {
//		int temp = 0;
//		for (int i = 0; i < n-1; i++) {
//			temp += abs(arr[i] - arr[i + 1]);
//
//		
//		}
//
//		if (temp > sum) {
//			sum = temp;
//		}
//
//		return;
//	}
//
//
//	for (int i = 0; i < n; i++) {
//
//		if (!isused[i]) {
//			
//			arr[a] = nums[i];
//			isused[i] = 1;
//			re(a + 1);
//			isused[i] = 0;
//		}
//
//
//
//	}
//
//
//
//	
//
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//
//	re(0);
//	cout << sum;
//}