//#include<iostream>
//#include<stack>
//#include<string>
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
//	int count = 0;
//
//	for (int k = 0; k < n; k++) {
//		string temp;
//		cin >> temp;
//
//		if (temp.size() % 2 != 0) {//Ȧ���� ���� 
//			continue;
//		}
//
//		stack<char> st;
//
//		for (int i = 0; i < temp.size(); i++) {
//			if (!st.empty()) {
//
//				if (st.top() == temp[i]) {
//					st.pop();
//					continue;
//				}
//				else {
//					st.push(temp[i]);
//					
//				}
//
//
//			}
//			else {
//				st.push(temp[i]);
//			}
//		}
//
//		if (st.empty()) {
//			count++;
//		}
//
//
//		
//	
//
//
//	}
//
//	cout << count;
//
//
//
//}
