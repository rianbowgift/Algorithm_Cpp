/*
#include<iostream>
using namespace std;


int dp[100006];
int BJ_14916() {
	int n;
	cin >> n;

	dp[1] = -1;
	dp[2] = 1;
	dp[3] = -1;
	dp[4] = 2;
	dp[5] = 1;
	


	for (int i = 6; i <= n;i++) {

		if (dp[i-2]) {

			dp[i] = dp[i-2] + 1;
		}
		if (dp[i - 5] && dp[i-5]!=-1) {
			
			dp[i] = dp[i - 5] + 1;
			
		}

	}

	if (n == 3 || n == 1) {
		cout << "-1";
	}else{
		cout << dp[n];
	}
	
	




	return 0;
}

*/