//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	string word;
//	vector<int> arr;
//	stack<double> st;
//
//
//	cin >> n;
//	cin >> word;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//
//	for (int i = 0; i < st.size(); i++) {
//
//		if (st.empty()) {
//			char tp = word[i] - 16;
//			string x = to_string(tp);
//			int xx = stoi(x);
//
//			st.push(xx);
//			continue;
//		}
//
//
//
//		if (word[i] >= 'A' && word[i] <= 'Z') {
//			char tp = word[i] - 16;
//			string x = to_string(tp);
//			int xx = stoi(x);
//
//			st.push(xx);
//			continue;
//		}
//		else if(word[i] >= '*' && word[i] <= '/') {
//			char tp1 = st.top() - 16;
//			string x1 = to_string(tp1);
//			int xx1 = stoi(x1);
//			st.pop();
//			char tp2 = st.top() - 16;
//			string x2 = to_string(tp2);
//			int xx2 = stoi(x2);
//			st.pop();
//			
//			if (word[i] == '+') {
//				st.push(xx1+xx2);
//			}
//			else if (word[i] == '-') {
//				st.push(xx1 - xx2);
//			}
//			else if (word[i] == '*') {
//				st.push(xx1 * xx2);
//			}
//			else if (word[i] == '/') {
//				st.push(xx1 / xx2);
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
//	}
//
//	
//
//
//	
//
//
//}