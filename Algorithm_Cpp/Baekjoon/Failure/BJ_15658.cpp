//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n;
//int arr[100];
//bool isused[100];
//int nums[1000];
//vector<int> act;
//int sized;
//int maxd;
//int mind;
//bool maxt;
//bool mint;
//
//void re(int a) {
//	if (a == n-1) {
//		int temp = nums[0];
//		for (int i = 0; i < n-1 ; i++) {
//			int y = nums[i + 1];
//			
//			if (arr[i] == 0) {	//µ¡
//				temp += y;
//			}
//			else if (arr[i] == 1) {	//»¬
//				temp -= y;
//			}
//			else if (arr[i] == 2) {	//°ö
//				temp *= y;
//			}
//			else if (arr[i] == 3) {	//³ª
//				if ((temp < 0 && y >0) || (temp >0 && y < 0)) {
//					temp = -(abs(temp) / abs(y));
//				}
//				else {
//					temp /= y;
//					
//				}
//			}
//
//		}
//
//		if (temp > maxd) {
//			maxd = temp;
//			maxt = true;
//		}
//		if (temp < mind) {
//			mind = temp;
//			mint = true;
//		}
//
//		return;
//
//	}
//
//	for (int i = 0; i < sized; i++) {
//		
//		if (!isused[i]) {
//			arr[a] = act[i];
//			isused[i] = 1;
//			re(a + 1);
//			isused[i] = 0;
//		}
//
//	}
//
//
//
//	
//	
//
//}
//
//int main() {
//	
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	cin >> n;
//
//
//	for (int i = 0; i < n; i++) {
//		cin >> nums[i];
//	}
//	//
//	for (int i = 0; i < 4; i++) {	// ¹éÅÍ¿¡ µ¡¼À »¬»ù °ö»ù ³ª´°»ù ¼øÀ¸·Î È½¼ö¸¸Å­ ½×ÀÓ
//		int temp;
//		cin >> temp;
//
//		for (int j = 0; j < temp; j++) {
//			act.push_back(i);
//		}
//	}
//	sized = act.size();
//
//	re(0);
//	if (maxt == false) {
//		maxd = mind;
//	}
//	if (mint == false) {
//		mind = maxd;
//	}
//	cout << maxd << "\n" << mind;
//
//
//
//}