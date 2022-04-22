//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		int min = 100001;
//		int sum = x; //기본은 모두 통과로 시작. 이후 한명씩 줄인다
//		vector<pair<int, int>> arr;
//		for (int j = 0; j < x; j++) {
//			pair<int, int> temp;
//			cin >> temp.first;
//			cin >> temp.second;
//			arr.push_back(temp);
//		}
//		
//		sort(arr.begin(), arr.end());	// arr.first 기준으로 오름차순 정렬된다
//
//		
//		for (int n = 0; n < x; n++) 
//			if (arr[n].second < min) {
//				min = arr[n].second;
//			}else{
//				sum--;
//
//		}
//	
//		
//		cout << sum << "\n";
//
//
//
//	}
//
//}