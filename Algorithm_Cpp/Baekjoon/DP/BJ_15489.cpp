#include<iostream>
using namespace std;


int dp_15489[31][31];
int BJ_15489() {


	int a, b,c;
	long long sum = 0;
	cin >> a >> b >> c;



	dp_15489[1][1] = 1;
	dp_15489[2][1] = 1;
	dp_15489[2][2] = 1;

	


	for (int i = 3; i <= 30; i++) {

		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i) {	//첫수거나 마지막수면 무조건 1
				dp_15489[i][j] = 1;
			}
			else {
				dp_15489[i][j] = dp_15489[i - 1][j - 1] + dp_15489[i - 1][j];
			}

		}

	}

	int x = 1;
	for (int i = a; i < a + c; i++) {

		for (int j = b; j < b+x; j++) {
			sum += dp_15489[i][j];
		}

		x++;
	}

	cout << sum;
	









	return 0;
}