//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n[100001];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int a;
//	int b;
//	cin >> a;
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		n[i] = temp;
//	}
//
//	sort(n, n + a);
//
//	cin >> b;
//
//	for (int i = 0; i < b; i++) {
//
//		int temp;
//		cin >> temp;
//
//		int st=0;
//		int en=a-1;
//		int mid = (st + en) / 2;
//		while (true) {
//
//			if (n[mid] < temp) {
//				st = mid + 1;
//				mid = (st + en) / 2;
//			}
//			else if (n[mid] > temp) {
//				en = mid-1;
//				mid = (st + en) / 2;
//			}
//			else {
//				cout << "1" <<"\n";
//				break;
//			}
//
//			if (st > en) {
//				cout << "0" <<"\n";
//				break;
//			}
//			
//			
//
//		}
//
//
//
//		
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