//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int counter[8002];
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<int> arr;
//	int n;
//	int sum = 0;
//	int maxd = 0;
//	int maxd_count = 0;
//	vector<int> max_repo;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//
//	sort(arr.begin(),arr.end());
//
//	
//	
//
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//		counter[arr[i] + 4000]++;
//	}
//
//
//	for (int i = 0; i < 8000; i++) {
//		if (maxd_count > counter[i]) {
//			max_repo.clear();
//			maxd_count = counter[i];
//			max_repo.push_back(i+4000);
//		}
//	}
//	
//
//}