//#include<iostream>
//#include<deque>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a, b;
//	deque<int> arr;
//	int count = 0;
//	cin >> a >> b;
//
//
//	for (int i = 1; i <= a; i++) {
//		arr.push_back(i);
//	}
//
//
//
//	for (int i = 0; i < b; i++) {
//
//		bool check = false;		//왼쪽부터 빼는게 좋다면 true 오른쪽부터 빼는게좋다면 false
//		int temp;
//		cin >> temp;
//		
//		if (temp == arr.front()) {
//			arr.pop_front();
//		}
//		else {
//
//			if (arr.size() % 2 == 0) {	//짝수면
//
//				for (int j = 0; j < arr.size() / 2; j++) {
//					if (arr[j] == temp) {	
//						check = true;
//						break;
//					}
//				}
//
//
//			}
//			else {		//홀수면
//				for (int j = 0; j < (arr.size() / 2) + 1; j++) {
//					if (arr[j] == temp) {
//						check = true;
//						break;
//					}
//				}
//
//			}
//
//
//
//
//
//
//
//			//2. 왼쪽으로 한 칸 이동시킨다. 이 연산을 수행하면, a1, ..., ak가 a2, ..., ak, a1이 된다.
//			//3. 오른쪽으로 한 칸 이동시킨다.이 연산을 수행하면, a1, ..., ak가 ak, a1, ..., ak - 1이 된다.
//			if (check == true) {
//				
//				while (true) {
//					if (temp == arr.front()) {
//						arr.pop_front();
//						break;
//					}
//					else {
//						int num = arr.front();
//						arr.pop_front();
//						arr.push_back(num);
//						count++;
//					}
//				}
//			}
//			else {
//				while (true) {
//					if (temp == arr.front()) {
//						arr.pop_front();
//						break;
//					}
//					else {
//						int num = arr.back();
//						arr.pop_back();
//						arr.push_front(num);
//						count++;
//					}
//				}
//			}
//
//
//
//
//
//
//
//		}
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
//
//
//}