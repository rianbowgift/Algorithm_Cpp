//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//
////선택횟수만 알면 되기때문에
//// 우선순위큐를 이용하여 최대힙을 정한다
//int main() {
//
//	int stock = 4;
//	int dates[3] = { 4,10,15 };
//	int supplies[3] = { 20,5,10 };
//	int k = 30;
//	int sum = 0;
//	int index = 0;
//	int count = 0;
//
//
//	priority_queue<int, vector<int>, less<int>> q;
//	
//	while (stock < k) {
//		
//		for (int i = index; i < 3 && dates[i] <= stock; i++) {
//
//			q.push(supplies[i]);
//			index++;
//
//
//		}
//		stock += q.top();
//		q.pop();
//		count++;
//
//	}
//
//	cout << count;
//	
//
//
//
//}