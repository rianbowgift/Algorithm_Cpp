//#include<iostream>
//using namespace std;
//
//char arr[444][444];
//
//void re(int a, int x, int y) {
//	if (a == 1) {
//		return;
//	}
//
//	int to_x=0, to_y=0;
//
//	for (int i = y; i <= (y - 1) + (4 * (a - 1)) + 1; i++) {
//		arr[x][i] = '*';
//		
//		if (i == (y - 1) + (4 * (a - 1)) + 1) {	//마지막 수 저장
//			to_y = i;
//			break;
//		}
//		
//	}
//	for (int i = x; i>=x - (4 * (a - 1) ); i--) {
//		arr[i][to_y] = '*';
//
//		if (i == x - (4 * (a - 1))) {//마지막 수 저장
//			to_x = i;
//			break;
//		}
//	}
//
//	for (int i = to_y; i >= to_y - (4 * (a - 1)-2); i--) {
//		arr[to_x][i] = '*';
//
//		if (i == (to_y - (4 * (a - 1)-2))) {
//			to_y = i;
//			break;
//		}
//	}
//
//	for (int i = to_x; i <= to_x+(4 * (a - 1) - 2); i++) {
//		
//		arr[i][to_y] = '*';
//
//		if (i == to_x+(4 * (a - 1) - 2)) {
//			to_x = i;
//			break;
//		}
//	}
//	//cout << to_x << to_y;
//	re(a - 1, to_x, to_y);
//
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//	if (a == 1) {
//		cout << "*";
//		return 0;
//	}
//	for (int i = 1; i <= (4 * (a - 1)) +1; i++) {		//첫 가로세로 예외처리
//		arr[1][i] = '*';
//	}
//	
//	for (int i = 1; i <= (4 * a) - 1; i++) {
//		arr[i][1] = '*';
//	}
//
//	re(a, (4*a)-1, 1);
//
//	for (int i = 1; i <= (4*a)-1; i++) {
//		for (int j = 1; j <= 4 * (a - 1) + 1; j++) {
//			if (arr[i][j] == '*') {
//				cout << '*';
//			}
//			else {
//				if (i == 2) {
//					break;
//				}
//				cout << ' ';
//			}
//
//		}
//		cout << "\n";
//	}
//
//
//}