//#include<iostream>
//using namespace std;
//
//int arr[5002][5002];
//
//int dx[4] = {0,-1,0,1};
//int dy[4] = {1,0,-1,0};
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, m; //�ʱⰪ
//	int dxy = 0;
//	cin >> n >> m;
//	int x = n-1;
//	int y = 0;
//	int count = 0;
//
//	while (true) {
//		arr[x][y] = 1;
//		//cout << x << " " << y << "\n";
//		count++;
//		if (count == n * m) {
//			cout << x << " " << y;
//			break;
//		}
//		if (x + dx[dxy] >= n || y + dy[dxy] >= m || x + dx[dxy] < 0 || y + dy[dxy] < 0 || arr[x+dx[dxy]][y+dy[dxy]]==1) {
//			if (dxy == 3) {
//				dxy = 0;
//			}
//			else {
//				dxy++;
//			}
//		}
//		x += dx[dxy];
//		y += dy[dxy];
//		
//	}
//
//
//}