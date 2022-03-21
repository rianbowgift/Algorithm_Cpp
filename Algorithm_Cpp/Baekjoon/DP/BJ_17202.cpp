#include<iostream>
#include<string>
using namespace std;

int sum[11];
int main() {

	int a, b;
	string a_b;
	cin >> a >> b;

	for (int i = 0; i < 10; i++) {
		sum[i] = i;
	}
	sum[10] = 0;

	
	while (a != 0) {
		a_b += to_string(a % 10);
		a_b += to_string(b % 10);
		a /= 10;
		b /= 10;
		break;
	}

	cout << a_b;
	



	return 0;
}