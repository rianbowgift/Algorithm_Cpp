//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int n, m;
//int arr[1000];
//bool isused[100];
//int nums[10];
//
//void re(int a) {
//	if (a == m) {
//
//
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//		cout << "\n";
//		return;
//	}
//
//	int bk = 0;		//한번나오면 저장해두고 연속되서 같은수 나오면 거절
//	for (int i = 1; i <= n; i++) {
//
//		if (bk != nums[i]) {
//			arr[a] = nums[i];
//
//			bk = nums[i];
//			re(a + 1);
//
//		}
//
//	}
//
//
//
//
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> nums[i];
//	}
//
//	sort(nums + 1, nums + n + 1);
//
//
//	re(0);
//
//
//
//
//}