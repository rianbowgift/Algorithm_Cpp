//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	stack<pair<int, int>> st;
//	//vector<int> arr;
//
//	int a;
//	cin >> a;
//
//	for (int i = 0; i < a; i++) {
//		pair<int, int> temp;
//		cin >> temp.first;
//		temp.second = i + 1;
//
//
//		if (st.empty()) {	//처음일떈 무조건 실행 6 9 5 7 4 일때 6,0 입력
//			cout << "0 ";
//			temp.second = 0;
//			st.push(temp);
//			continue;
//		}
//
//		while (!st.empty()) {
//			if (st.top().first > temp.first) {
//
//				cout << st.top().second << " ";
//				st.push(temp);
//				break;
//			}
//			else {
//				if (st.size() == 1) {
//
//					cout << st.top().second << " ";
//					st.push(temp);
//					break;
//				}
//				st.pop();
//
//
//			}
//
//		}
//
//
//
//
//
//
//
//
//
//	}
//
//
//
//
//
//
//
//}