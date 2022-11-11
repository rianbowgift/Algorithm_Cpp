//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//
////설명에서 O(N^2)로 설명했는데 O(N)에풀수있다. 예를들어 
////6 9 5 7 4라면 6 9가 나온시점에서 6은 오른쪽에 9가있는이상 절대
////다시 나올일이없으므로 저장하지않아도된다. 
////이와같은 방법으로 생각해보면 9가 저장된후 5가 잠시 저장되다가
//// 7이나온시점에서 5는 삭제되버리고 7이 잠시 저장되다가 4가나온시점에서
//// 9,7저장으로 확정.이후 4가 잠시저장.. 식으로 이어진다
////이때 불규칙하게 순서가 저장되므로 pair를쓰던 다른방식을쓰던 
////미리 몇번째탑인지 저장해둬야한다
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
//	for (int i = 1; i <= a; i++) {
//		pair<int, int> temp;
//		cin >> temp.first;
//		temp.second = i;
//
//		while (!st.empty()) {
//			if (st.top().first > temp.first) {
//
//				cout << st.top().second << " ";
//				break;
//			}
//			st.pop();
//
//
//		}
//		if (st.empty()) {
//			cout << "0 ";
//		}
//		st.push(temp);
//
//
//	}
//
//}