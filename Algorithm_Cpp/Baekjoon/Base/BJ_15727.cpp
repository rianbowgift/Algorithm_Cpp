#include<iostream>
using namespace std;

int BJ_15727() {
	int a;
	cin >> a;
	int sum = 0;

	while (true) {
		if (a <= 0) {
			cout << sum ;
			break;
		}
		sum++;
		a -= 5;
		

	}
	

	return 0;
}