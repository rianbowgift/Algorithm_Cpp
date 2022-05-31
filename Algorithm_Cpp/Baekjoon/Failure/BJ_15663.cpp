//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int n, m;
//int arr[100];
//bool isused[10];
//int nums[100];
//
//
//void re(int a) {
//	if (a == m) {
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//		cout << "\n";
//		return;
//	}
//
//	int bk = 0;
//	for (int i = 0; i < n; i++) {
//		if (bk != nums[i]) {
//			
//			arr[a] = nums[i];
//			re(a + 1);
//
//
//		}
//
//	}
//
//
//
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//
//	sort(nums, nums + n );
//
//	re(0);
//
//
//}