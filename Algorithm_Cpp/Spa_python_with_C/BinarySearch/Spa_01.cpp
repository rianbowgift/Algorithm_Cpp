//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//int main() {
//
//	vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
//	int finding_target = 39;
//
//	int st = 0;
//	int en = arr.size()-1;
//
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
