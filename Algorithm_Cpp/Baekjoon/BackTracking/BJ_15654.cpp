//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
//int arr[100];
//bool isused[10];
//int nums[100];
//
//void re(int a) {
//	if (a == m) {
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (!isused[i]) {
//
//			arr[a] = nums[i];
//			isused[i] = 1;
//			re(a+1);
//			isused[i] = 0;
//
//		}
//
//
//
//	}
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
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> nums[i];
//	}
//
//	sort(nums+1, nums + n+1);
//	
//
//	re(0);
//
//
//
//
//}