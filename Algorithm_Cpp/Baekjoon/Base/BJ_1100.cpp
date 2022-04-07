//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//	string arr[8];
//	int sum = 0;
//
//	for (int i = 0; i < 8; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 8; i++) {
//
//		for (int j = 0; j < 8; j++) {
//
//			char temp = arr[i][j];
//
//			if (i % 2 == 0) {	//Èù-°Ë ¼ø¼­
//				
//				if (j % 2 == 0) {
//					if (temp == 'F') {
//						sum++;
//					}
//				}
//
//
//			}
//			else {		//°Ë-Èù ¼ø¼­
//				if (j % 2 != 0) {
//					if (temp == 'F') {
//						sum++;
//					}
//				}
//
//			}
//
//
//
//		}
//	}
//
//	cout << sum;
//
//
//
//
//
//
//	return 0;
//}