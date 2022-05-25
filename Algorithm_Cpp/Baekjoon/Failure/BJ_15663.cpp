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
//int counter;
//vector<int> tr_num;
//
//void re(int a) {
//	if (m == a) {
//		string temp;
//		for (int i = 0; i < m; i++) {
//			temp += to_string(arr[i]);
//		}
//
//		if (!tr_num.empty()) {
//			vector<int> tr_temp = tr_num;
//			int size = to_string(tr_num.back()).size();	// 마지막 배열원소 길이
//			int number = 0;	//마지막 두번째 숫자위치 
//			if (size < 2) {
//				number = 0;
//			}
//			else {
//				number = to_string(tr_num.back())[size - 2];
//			}
//				
//			while (true) {
//				if (to_string(tr_num.back())[number]) {
//
//				}
//
//				if (tr_num.back() == stoi(temp)) {
//					return;
//				}
//				else {
//					tr_num.pop_back();
//				}
//			}
//
//
//
//
//
//
//
//		
//	
//		}
//
//
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//		tr_num.push_back(stoi(temp));
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) {
//
//		if (!isused[i]) {
//
//			arr[a] = nums[i];
//			isused[i] = 1;
//			re(a + 1);
//			isused[i] = 0;
//
//
//		}
//
//	}
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
//	for (int i = 1; i <= n; i++) {
//		cin >> nums[i];
//	}
//
//	sort(nums + 1, nums + n + 1);
//
//	re(0);
//
//
//}