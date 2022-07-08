//#include<iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//	int c;
//	while (b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return a;
//	
//}
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		cout << a * b / (gcd(a, b)) << " ";
//		cout << gcd(a, b) << "\n";
//		
//
//	}
//
//}