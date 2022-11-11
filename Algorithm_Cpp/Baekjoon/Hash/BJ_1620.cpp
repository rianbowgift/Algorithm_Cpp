//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	map<string, string> hash;
//	map<string, string > hash2;
//
//	int n,m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//
//		string temp;
//		cin >> temp;
//		hash[temp] = to_string(i+1);
//		hash2[to_string(i + 1)] = temp;
//	}
//
//
//	for (int i = 0; i < m; i++) {
//		
//		string temp;
//		cin >> temp;
//		if (temp[0] >= 'A' && temp[0] <= 'Z') {	//�����Է��̶��
//			cout << hash[temp];
//		}
//		else {	//�����Է��̶��
//			cout << hash2[temp];
//		}
//		cout << "\n";
//
//	}
//
//	
//
//
//}