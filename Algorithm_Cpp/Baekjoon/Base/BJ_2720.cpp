//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//
//
//	for (int i = 0; i < n; i++) {
//
//		int temp;
//		cin >> temp;
//		int a = 0, b = 0, c = 0, d = 0;
//		while (temp > 0) {
//			if (temp >= 25) {
//				a++;
//				temp -= 25;
//				continue;
//			}
//			else if (temp >= 10) {
//				b++;
//				temp -= 10;
//				continue;
//			}
//			else if (temp >= 5) {
//				c++;
//				temp -= 5;
//				continue;
//			}
//			else {
//				d++;
//				temp--;
//				continue;
//			}
//		}
//		cout << a << " " << b << " " << c << " " << d << "\n";
//
//	}
//
//}