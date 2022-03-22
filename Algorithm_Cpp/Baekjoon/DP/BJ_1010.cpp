#include<iostream>

using namespace std;

int arr_1010[31][31];

int dp_1010(int n, int m) {
	if (n==m || n ==0) {
		return 1;
	}
	if (arr_1010[n][m]) {
		return arr_1010[n][m];
	}
	return arr_1010[n][m] = dp_1010(n , m-1) + dp_1010(n - 1, m - 1);

}

int BJ_1010() {
	int a;
	cin >> a;


	for (int i = 0; i < a; i++) {
		int n, m;
		cin >> n >> m;
		cout << dp_1010(n, m) << endl;;
	}




	return 0;
}