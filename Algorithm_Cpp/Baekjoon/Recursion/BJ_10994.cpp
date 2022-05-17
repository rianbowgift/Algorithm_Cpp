//#include<iostream>
//using namespace std;
//
//
//char arr[405][405];
//
//void re(int a,int x,int y) {
//	if (a == 0) {
//		arr[x][y] = '*';
//		return;
//	}
//
//	for (int i = x; i <= x-1+(4 * (a - 1) + 1); i++) {
//		arr[i][y] = '*';
//	}
//	for (int i = y; i <= y-1+(4 * (a - 1) + 1); i++) {
//		arr[x][i] = '*';
//	}
//	for (int i = x; i <= x-1+(4 * (a - 1) + 1); i++) {
//		arr[i][((y-1)+4*(a-1)+1)] = '*';
//	}
//	for (int i = y; i <= y-1+(4 * (a - 1) + 1); i++) {
//		arr[(x-1)+4 * (a - 1) + 1][i] = '*';
//	}
//
//	
//	re(a - 1, x + 2, y + 2);
//
//	
//
//
//
//}
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	int a;
//	cin >> a;
//
//
//	re(a,1,1);
//
//	for (int i = 1; i <= 4 * (a - 1) + 1; i++) {
//		for (int j = 1; j <= 4 * (a - 1) + 1; j++) {
//			if (arr[i][j] == '*') {
//				cout << arr[i][j];
//			}
//			else {
//				cout << ' ';
//			}
//			
//		}
//		cout << "\n";
//	}
//}