//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int arr[1026][1026];
//
//int re(int a,int x,int y) {
//	int temp[4];
//	if (a == 1) {
//		return arr[x][y];
//	}
//	else {
//
//		temp[0] = re(a / 2, x, y);
//		temp[1] = re(a / 2, x + a / 2, y);
//		temp[2] = re(a / 2, x, y + a / 2);
//		temp[3] = re(a / 2, x + a / 2, y + a / 2);
//
//		sort(temp, temp + 4);
//		return temp[1];
//	}
//
//
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= a; j++) {
//
//			cin >> arr[i][j];
//		}
//	}
//
//	cout << re(a,1,1);
//
//}