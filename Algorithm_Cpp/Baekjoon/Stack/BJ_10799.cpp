//#include<iostream>
//#include<stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	stack<char> st;
//	string input;
//	int sum = 0;
//
//
//	cin >> input;
//
//	for (int i = 0; i < input.size(); i++) {
//
//		if (st.empty()) {
//			st.push(input[i]);
//			continue;
//		}
//
//		if (input[i] == '(') {
//			st.push(input[i]);
//		}
//		else {	// ) 가 들어왔을때
//			if (input[i - 1] == '(') {	//레이저면
//				st.pop();
//				sum += st.size();
//
//			}
//			else {
//				st.pop();
//				sum += 1;
//			}
//		}
//
//
//
//
//
//
//
//	}
//
//	cout << sum;
//
//
//
//}