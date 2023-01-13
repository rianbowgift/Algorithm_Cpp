//#include<iostream>
//using namespace std;
//
//int arr[6][6];
//
//int main() {
//	
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			int temp;
//			cin >> temp;
//			arr[i][j] = temp;
//		}
//	}
//
//	for (int q = 0; q < 25; q++) {
//		int temp;
//		cin >> temp;
//
//		bool sw = false;
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				if (arr[i][j] == temp) {
//					arr[i][j] = 0;
//					sw = true;
//					break;
//				}
//			}
//			if (sw) {
//				break;
//			}
//		}
//
//		int sum = 0;
//		//°Ë»ç
//		if (q >= 0) {
//			for (int i = 0; i < 5; i++) {
//				for (int j = 0; j < 5; j++) {
//					if (arr[i][j] != 0) {
//						break;
//					}
//					if (j == 4 && arr[i][j] == 0) {
//						sum++;
//					}
//				}
//			}
//
//			for (int i = 0; i < 5; i++) {
//				for (int j = 0; j < 5; j++) {
//					if (arr[j][i] != 0) {
//						break;
//					}
//					if (j == 4 && arr[j][i] == 0) {
//						sum++;
//					}
//				}
//			}
//
//			for (int i = 0; i < 5; i++) {
//				if (arr[i][i] != 0) {
//					break;
//				}
//				if (i == 4 && arr[i][i] == 0) {
//					sum++;
//				}
//			}
//
//			
//			for (int i = 4; i >= 0; i--) {
//				if (arr[i][abs(i-4)] != 0) {
//					break;
//				}
//				if (i == 0 && arr[i][abs(i-4)] == 0) {
//					sum++;
//				}
//			}
//
//			if (sum >= 3) {
//				cout << q+1;
//				return 0;
//			}
//
//		}
//	}
//
//}