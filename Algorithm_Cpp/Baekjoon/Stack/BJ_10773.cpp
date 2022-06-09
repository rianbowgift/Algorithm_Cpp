//#include<iostream>
//#include<stack>
//using namespace std;
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	stack<int> st;
//	cin >> n;
//	int sum = 0;
//
//	for (int i = 0; i < n; i++) {
//		int temp;
//
//		cin >> temp;
//		
//		if (temp == 0) {
//			st.pop();
//		}
//		else {
//			st.push(temp);
//		}
//		
//
//	}
//
//	while (!st.empty()){
//		sum += st.top();
//		st.pop();
//
//
//	}
//
//	cout << sum;
//
//}