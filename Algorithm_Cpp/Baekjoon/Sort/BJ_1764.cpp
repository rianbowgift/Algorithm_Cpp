//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<map>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	map<string, int> arr1;
//	vector<string> arr2;
//	int a, b;
//
//	cin >> a >> b;
//
//
//	for (int i = 0; i < a+b; i++) {
//		string temp;
//		cin >> temp;
//		if (arr1[temp]) {
//			arr2.push_back(temp);
//		}
//		else {
//			arr1[temp] = 1;
//		}
//	
//	}
//
//
//	sort(arr2.begin(), arr2.end());
//	cout << arr2.size() << "\n";
//	for (int i = 0; i < arr2.size(); i++) {
//	
//		cout << arr2[i] << "\n";
//	}
//
//
//}