//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	
//	int a;
//
//	cin >> a;
//	vector<int> arr;
//
//
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//
//	}
//
//	vector<int> arr2(arr);
//
//
//	sort(arr2.begin(),arr2.end());
//	arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());
//	
//
//
//
//	for (int i = 0; i < a; i++) {
//		
//		
//		auto temp = lower_bound(arr2.begin(), arr2.end(), arr[i]);
//
//		cout << temp - arr2.begin() << " ";
//	}
//
//
//}