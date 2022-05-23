//#include<iostream>
//using namespace std;
//
//int n, m;
//int arr[100];
//bool isused[10];
//
//void back(int a,int back_num) {
//	if (a == m) {
//		for (int i = 0; i < m; i++) {
//			cout << arr[i] << ' ';
//		}
//		cout << "\n";
//		return;
//	}
//
//
//
//	for (int i = 1; i <= n; i++) {
//		
//		if (back_num <= i) {
//
//			arr[a] = i;
//			back(a + 1, i);
//
//		}
//
//
//
//
//	}
//
//
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
//	cin >> n >> m;
//
//	back(0,0);
//
//
//}