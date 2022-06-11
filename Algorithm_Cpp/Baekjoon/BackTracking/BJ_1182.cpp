//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n, m;
//int to_n;
//int arr[100];
//bool isused[100];
//int nums[100];
//int counter;
//
//
//void re(int a) {
//
//	if (a == n) {
//		int sum = 0;
//		for (int i = 0; i < a; i++) {
//			sum += nums[i];
//		}
//		if (sum == m) {
//			counter++;
//
//		}
//		return;
//	}
//
//
//	for (int i = 0; i < to_n; i++) {
//		if (!isused[i]) {
//			nums[a] = arr[i];
//			isused[i] = 1;
//			re(a + 1);
//			isused[i] = 0;
//		}
//	}
//
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	to_n = n;
//	while(0<n){
//
//		re(0);
//		
//		//cout << "n= " << n << " counter= " << counter << "\n";
//		n--;
//	}
//
//	cout << counter;
//
//
//
//	
//}