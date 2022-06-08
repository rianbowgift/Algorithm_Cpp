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
//	
//
//	for (int k = 0; k < n; k++) {
//		string temp;
//		cin >> temp;
//
//		if (temp.size() % 2 != 0) {//È¦¼ö¸é Á¦¿Ü 
//			cout << "NO" << "\n";
//			continue;
//		}
//
//		stack<char> st;
//		for (int i = 0; i < temp.size(); i++) {
//
//			
//			if (st.empty()) {
//				st.push(temp[i]);
//			}
//			else {
//				if (st.top() == '(') {
//					if (temp[i] == ')') {
//						st.pop();
//					}
//					else {
//						st.push(temp[i]);
//					}
//				}
//				else {
//					st.push(temp[i]);
//				}
//			}
//			
//		}
//
//		if (st.empty()) {
//			cout << "YES" << "\n";
//
//		}
//		else {
//			cout << "NO" << "\n";
//		}
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
//}
