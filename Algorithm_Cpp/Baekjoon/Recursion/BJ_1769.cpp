//#include<iostream>
//#include<string>
//using namespace std;
//
//void recursion(string a, int b) {
//	//cout << a << "ÀÔ´Ï´Ù\n";
//	
//	if (a.size() ==1) {
//		int temp = a[0] - '0';
//		cout << b << "\n";
//		if (temp == 3 || temp == 6 || temp == 9) {
//			cout << "YES";
//		}
//		else {
//			cout << "NO";
//		}
//		return;
//	}
//
//	int sum = 0;
//	for (int i = 0; i < a.size(); i++) {
//		sum += a[i] - '0';
//	}
//	string sum_s = to_string(sum);
//	recursion(sum_s, b + 1);
//
//
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string a;
//	cin >> a;
//
//	recursion(a, 0);
//
//
//
//
//}