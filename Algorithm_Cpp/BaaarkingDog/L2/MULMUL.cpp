#include<iostream>
using namespace std;

int BKD_L2_3() {
	int a;

	cin >> a;
	
	double b = sqrt(a);
	int c = sqrt(a);


	if (b == c) {
		cout <<"1";
	}
	else {
		cout << "0";
	}

	return 0;
}