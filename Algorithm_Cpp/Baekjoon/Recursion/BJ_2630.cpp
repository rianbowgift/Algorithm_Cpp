//#include<iostream>
//using namespace std;
//
//int nums[200][200];
//int blue = 0;
//int white = 0;
//
//void re(int a,int x,int y) {
//	int sum = 0;
//	if (a == 1) {
//		if (nums[x][y] == 1) {
//			blue++;
//		}
//		else {
//			white++;
//		}
//		return;
//	}
//
//	int count = 0;
//	for (int i = x; i <= x+a-1; i++) {
//		for (int j = y; j <= y+a-1; j++) {
//			if (nums[i][j] == 1) {
//				count++;
//			}
//		}
//	}
//	if (1 == 1) {
//		cout << "";
//	}
//
//	if (count == a * a) {	//분할전 모든칸이 파란색일경우
//		blue++;
//		return;
//	}
//	else if (count == 0) { //분할전 모든칸이 힌색일경우
//		white++;
//		return;
//	}
//	else {	//섞여있을경우
//		re(a / 2, x, y);
//		re(a / 2, x, a/2 + y);
//		re(a / 2, a / 2 + x, y);
//		re(a / 2, a / 2 + x, a / 2 + y);
//	}
//
//
//
//
//
//
//
//
//	
//	
//
//
//	
//	
//
//
//
//
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= a; j++) {
//			cin >> nums[i][j];
//		}
//	}
//
//	re(a,1,1);
//	cout << white << "\n" << blue;
//}