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
//		bool check = false;		//���ʺ��� ���°� ���ٸ� true �����ʺ��� ���°����ٸ� false
//		int temp;
//		cin >> temp;
//		
//		if (temp == arr.front()) {
//			arr.pop_front();
//		}
//		else {
//
//			if (arr.size() % 2 == 0) {	//¦����
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
//			else {		//Ȧ����
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
//			//2. �������� �� ĭ �̵���Ų��. �� ������ �����ϸ�, a1, ..., ak�� a2, ..., ak, a1�� �ȴ�.
//			//3. ���������� �� ĭ �̵���Ų��.�� ������ �����ϸ�, a1, ..., ak�� ak, a1, ..., ak - 1�� �ȴ�.
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