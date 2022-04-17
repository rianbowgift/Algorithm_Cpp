//#include<iostream>
//
//using namespace std;
//int arr[100];
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string a;
//	cin >> a;
//	
//	char max = 0;
//	int max_index = 0;
//	
//
//
//	for (int i = 0; i < a.size(); i++) {
//		for (int j = i; j < a.size(); j++) {
//			if (a[j] > max) {
//				max = a[j];
//				max_index = j;
//			}
//		}
//
//		int temp = a[i];
//		a[i] = a[max_index];
//		a[max_index] = temp;
//
//
//		max = 0;
//	}
//
//	for (int i = 0; i < a.size(); i++) {
//		cout << a[i];
//	}
//	
//	
//
//
//
//}