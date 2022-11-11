//#include<iostream>
//#include<stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);;
//	string a;
//	stack<char> st;
//
//	cin >> a;
//
//	for (int i = 0; i < a.length(); i++) {
//
//		char temp = a[i];
//		if (st.empty()) {
//			st.push(temp);
//			continue;
//		}
//		if (temp == ')' && st.top() == '(') {
//			st.pop();
//		}
//		else {
//			st.push(temp);
//		}
//
//
//	}
//
//	if (st.empty()) {
//		cout << "True";
//	}
//	else {
//		cout << "False";
//	}
//
//
//
//}