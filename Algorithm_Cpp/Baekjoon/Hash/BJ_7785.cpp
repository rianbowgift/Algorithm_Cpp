//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<vector>
//using namespace std;
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	map<string, string> hash;
//	vector<string> vt;
//	int n;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string name;
//		string inout;
//		cin >> name >> inout;
//		if (inout == "enter") {
//			hash[name] = "enter";
//		}
//		else {
//			hash[name] = "leave";
//		}
//	}
//
//	for (auto temp : hash) {
//		if (temp.second == "enter") {
//			vt.push_back(temp.first);
//		}
//	}
//
//	sort(vt.rbegin(), vt.rend());
//
//	for (auto temp : vt) {
//		cout << temp << "\n";
//	}
//
//
//
//}