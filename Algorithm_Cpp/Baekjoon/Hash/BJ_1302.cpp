//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//int main() {
//
//
//	map<string, int> mp;
//	vector<string> tempd;
//	int n;
//	cin >> n;
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		string temp;
//		cin >> temp;
//		mp[temp]++;
//		if (mp[temp] > max) {
//			max = mp[temp];
//			
//			tempd.clear();
//			tempd.push_back(temp);
//		}
//		if (mp[temp] == max) {
//			tempd.push_back(temp);
//		}
//
//	}
//
//	if (tempd.size() >= 2) {
//		sort(tempd.begin(), tempd.end());
//		cout << tempd[0];
//	}
//	else {
//		cout << tempd[0];
//	}
//	
//
//
//
//}