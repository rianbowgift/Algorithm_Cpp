#include<iostream>

void main() {
	long long a, b;
	long long sum = 0;
	long long  half = 0;
	long long etc = 0;

	std::cin >> a >> b;

	if (a > b) {
		long long temp = a;
		a = b;
		b = temp;
	}
	half = (b - a) / 2;
	if ((b - a) % 2 == 0) {
		etc = (a + b) / 2;
		sum = ((b + a) * (half)) + etc;
	}	
	else {
		sum = ((b + a) * (half + 1));
	}
	
	
	

	std::cout << sum;

}