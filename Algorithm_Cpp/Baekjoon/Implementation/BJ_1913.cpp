//#include<iostream>
//using namespace std;
//
//int arr[1001][1001];
//
//int nx[4] = {1,0,-1,0};
//int ny[4] = {0,1,0,-1};
//
//int main() {
//
//	int x, num;
//
//	cin >> x >> num;
//	int numx = 0;
//	int numy = 0;
//
//	int pos = 0; //방향 바꿀때마다 +1씩
//	int x_re = x; //x저장값. 안으로 갈떄 2씩감소
//	int x_clear = 0;	//x초기화카운트
//
//	int w = 0;
//	int y = 0;
//	for (int t = x*x; 0<t; t--) {
//		arr[w][y] = t;
//		x_clear++;
//		if (x_clear == x_re) {
//			x_clear = 1;
//			pos++;
//		}
//		if (pos == 3 && x_clear == x_re - 1) {
//			pos = 0;
//			x_clear = 0;
//			x_re -= 2;
//		}
//		if (t == num) {
//			numx = y;
//			numy = w;
//		}
//
//		w += nx[pos];
//		y += ny[pos];
//	
//
//	}
//
//	for (int i = 0; i < x; i++) {
//		for (int j = 0; j < x; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//	cout << numy+1 << " " << numx+1;
//
//}