//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int arr[1026][1026];
//
//void re(int a,int x, int y) {
//	if (a == 0) {
//		arr[x][y] = 1;
//		return;
//	}
//
//	re(a - 1, x, y);
//	re(a - 1, x, (pow(2, a - 1)) + y);
//	re(a - 1, (pow(2, a - 1)) + x, y);
//
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int a;
//	cin >> a;
//
//
//
//	re(a,1,1);
//	int sum = 0;
//	for (int i = 1; i <= pow(2, a); i++) {
//		for (int j = 1; j <= pow(2, a)-sum; j++) {
//			if (arr[i][j] == 0) {
//				cout << " ";
//			}
//			else {
//				cout << "*";
//			}
//		}
//		if (i == pow(2, a)) {
//			break;
//		}
//		cout << "\n";
//		sum++;
//	}
//
//
//
//}