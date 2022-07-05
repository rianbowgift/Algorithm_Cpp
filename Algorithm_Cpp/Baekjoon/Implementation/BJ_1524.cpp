//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, m, t;
//
//	cin >> t;
//
//	for (int z = 0; z < t; z++) {
//
//		cin >> n >> m;
//		vector<int> jun;
//		vector<int> bi;
//
//		for (int i = 0; i < n; i++) {
//			int temp;
//			cin >> temp;
//			jun.push_back(temp);
//		}
//
//		for (int i = 0; i < m; i++) {
//			int temp;
//			cin >> temp;
//			bi.push_back(temp);
//		}
//
//		sort(jun.rbegin(), jun.rend());
//		sort(bi.rbegin(), bi.rend());
//
//
//		while (true) {
//			if (jun.empty() && bi.empty()) {
//				cout << "C" << "\n";
//				break;
//			}
//
//			if (jun.empty()) {
//				cout << "B" << "\n";
//				break;
//			}
//			if (bi.empty()) {
//				cout << "S" << "\n";
//				break;
//			}
//
//			if (jun.back() > bi.back()) {
//				bi.pop_back();
//			}
//			else if (jun.back() < bi.back()) {
//				jun.pop_back();
//			}
//			else if (jun.back() == bi.back()) {
//				bi.pop_back();
//			}
//			
//
//
//		}
//
//
//	}
//
//
//}