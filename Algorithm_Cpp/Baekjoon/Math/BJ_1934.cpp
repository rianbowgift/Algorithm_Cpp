//#include<iostream>
//
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
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//
//	cin >> n;
//
//	for (int z = 0; z < n; z++) {
//
//		int a;
//		int b;
//
//		cin >> a >> b;
//
//		cout << a*b/(gcd(a, b)) << "\n";
//
//
//	}
//
//}