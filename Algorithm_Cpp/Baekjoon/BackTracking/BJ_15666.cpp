//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//
//int n, m;
//int arr[1000];
//bool isused[100];
//int nums[10];
//
//
//void re(int a,int back) {
//	if (a == m) {
//		
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//	
//		cout << "\n";
//		return;
//	}
//
//
//	int bk = 0;
//	for (int i = back; i < n; i++) {
//
//		if (bk != nums[i]) {
//			arr[a] = nums[i];
//			bk = nums[i];
//			re(a + 1,i);
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
//
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//
//	sort(nums, nums + n);
//
//	re(0,0);
//
//
//
//
//}