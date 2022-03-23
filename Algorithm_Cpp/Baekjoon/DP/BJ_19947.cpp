#include<iostream>

using namespace std;


int dp_19947[11];
int BJ_19947() {

	int a, b;
	

	cin >> a >> b;
	
	dp_19947[0] = a;

	for (int i = 1; i <= 10; i++) {
		

		dp_19947[i] = (int)(dp_19947[i - 1] * 1.05);
		if (i >= 3) {
			dp_19947[i] = max(dp_19947[i], (int)(dp_19947[i - 3] * 1.2));
		}
		if (i >= 5) {
			dp_19947[i] = max((int)dp_19947[i], (int)(dp_19947[i - 5] * 1.35));
		}

	}


	cout << dp_19947[b];


	return 0;
}