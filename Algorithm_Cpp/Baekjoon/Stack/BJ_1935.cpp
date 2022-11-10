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
//
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//	
//	for (int i = 0; i < word.size(); i++) {
//
//		if (st.empty()) {
//			int temp = word[i] - 65;
//			int num = arr[temp];	//���Ϳ��� �ش�迭ĭ�� �ִ°� ������
//			st.push(num);
//			continue;
//		}
//
//		if (word[i] >= 'A' && word[i] <= 'Z') {
//			int temp = word[i] - 65;
//			int num = arr[temp];	//���Ϳ��� �ش�迭ĭ�� �ִ°� ������
//			//cout << num;
//			st.push(num);
//		}
//		else {
//			double x = st.top();
//			st.pop();
//			double y = st.top();
//			st.pop();
//			if (word[i] == '*') {
//				st.push(y * x);
//			}
//			else if (word[i] == '-') {
//				st.push(y - x);
//			}
//			else if (word[i] == '+') {
//				st.push(y + x);
//			}
//			else if (word[i] == '/') {
//				st.push(y / x);
//			}
//		}
//
//
//
//	}
//
//
//
//	
//	cout << fixed;
//	cout.precision(2);
//	cout << st.top();
//	
//
//
//}