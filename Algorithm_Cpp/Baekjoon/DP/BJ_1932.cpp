//#include<iostream>
//using namespace std;
//
//int arr[505][505];
//int sum[505][505];
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	//내 하위의 나와 같은인덱스 or 나의인덱스+1
//
//	sum[0][0] = arr[0][0];
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			//1.맨왼쪽수일때
//			if (j == 0) {
//				sum[i][j] = sum[i - 1][j] + arr[i][j];
//				continue;
//			}
//
//			//2.맨오른쪽수일때
//			if (j == i) {
//				sum[i][j] = sum[i - 1][j-1] + arr[i][j];
//				continue;
//			}
//			
//			//3.그외일때
//			sum[i][j] = max(sum[i - 1][j], sum[i - 1][j - 1]) + arr[i][j];
//			
//		}
//	}
//
//
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		if (sum[n-1][i] > max) {
//			max = sum[n-1][i];
//		}
//	}
//
//	cout << max;
//
//
//
//
//}