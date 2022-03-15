#include<iostream>

int BJ_2530() {

	int a, b, c,d;
	std::cin >> a >> b >> c >> d;

	c += d;

	while (true) {
		if (c >= 60) {
			b++;
			c -= 60;
		}
		else {
			break;
		}
	}
	while (true) {
		if (b >= 60) {
			a++;
			b -= 60;
		}
		else {
			break;
		}
	}
	while (true) {
		if (a >= 24) {
			a -= 24;
		}
		else {
			break;
		}
	}

	std:: cout << a << " " << b << " " << c;



	return 0;


}