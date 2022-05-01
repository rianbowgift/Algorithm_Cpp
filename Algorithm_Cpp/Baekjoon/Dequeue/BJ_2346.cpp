//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	deque<pair<int, int>> dqu;
//
//	int a;  
//	int next=0;
//
//	cin >> a;
//
//	for (int i = 1; i <= a; i++) {
//		int temp;
//		cin >> temp;
//		dqu.push_back({ i,temp });
//	}
//
//
//	while (!dqu.empty()) {
//
//		if (next > 0) {		//  +ÀÏ°æ¿ì
//			
//			for (int i = 0; i < next-1; i++) {
//				pair<int, int> temp = dqu.front();
//				dqu.pop_front();
//				dqu.push_back(temp);
//			}
//
//				
//		}
//		else {
//			for (int i = 0; i < abs(next); i++) {
//				pair<int, int> temp = dqu.back();
//				dqu.pop_back();
//				dqu.push_front(temp);
//			}
//
//
//		}
//
//		next = dqu.front().second;
//		cout << dqu.front().first << " ";
//		dqu.pop_front();
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
//}