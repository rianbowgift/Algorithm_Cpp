#include<iostream>
using namespace std;

long long dp_13301[81];
int BJ_13301() {
	int n;
	cin >> n;
	

	dp_13301[1] = 1;
	dp_13301[2] = 1;



	for (int i = 3; i <= n; i++) {

		dp_13301[i] = dp_13301[i - 1] + dp_13301[i - 2];
	}

	cout << (dp_13301[n] * 2) + ((dp_13301[n] + dp_13301[n - 1]) * 2);




	return 0;
}