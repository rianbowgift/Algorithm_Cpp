//#include<iostream>
//#include<stack>
//#include<vector>
//
//using namespace std;
//
//int n, m;
//
//
//int main() {
//	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<stack<int>>st;
//
//
//	
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int temp;
//		cin >> temp;
//		stack<int> tempst;
//		for (int j = 0; j < temp; j++) {
//			int num;
//			cin >> num;
//			tempst.push(num);
//		}
//		st.push_back(tempst);
//	}
//
//	bool check = false;
//	int count = 0;
//	while (true) {
//		for (int i = 0; i < m; i++) {
//			int temp=0;
//			if (!st[i].empty()) {
//
//				if (st[i].top() == count + 1) {
//					//cout << st[i].top();
//					st[i].pop();
//					count++;
//					check = true;
//				}
//
//				
//			}
//
//
//
//		}
//
//		if (check == false) {
//			cout << "No";
//			return 0;
//		}
//		else {
//			check = false;
//		}
//		if (count==n) {
//			cout << "Yes";
//			return 0;
//		}
//
//	
//
//	}
//
//
//
//
//	
//}
//
//
