//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//int main() {
//
//	vector<int> arr = { 0,3,5,6,1,2,4 };
//	int finding_target = 2;
//
//	int st = 0;
//	int en = arr.size() - 1;
//
//	sort(arr.begin(), arr.end());
//
//
//	while (st <= en) {
//
//		int mid = (st + en) / 2;
//		if (arr[mid] < finding_target) {
//			st = mid + 1;
//		}
//		else if (arr[mid] > finding_target) {
//			en = mid - 1;
//		}
//		else {
//			cout << "True";
//			return 0;
//		}
//	}
//
//	cout << "False";
//	return 0;
//
//
//
//
//
//}
//
//
