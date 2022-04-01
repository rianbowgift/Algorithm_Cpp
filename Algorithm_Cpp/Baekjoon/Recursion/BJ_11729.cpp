#include<iostream>
using namespace std;


void recursion(int a, int b, int n) {
	if (n == 1) {
		cout << a << ' ' << b << '\n';
		return;
	}
	recursion(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	

	recursion(6 - a - b, b, n - 1);
	
}


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin >> a;
	cout << (1 << a) - 1 << '\n';
	recursion(1,3,a);

	
}