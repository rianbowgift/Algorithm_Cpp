#include<iostream>
using namespace std;


int dp_16395[31][31];
int BJ_16395() {


	int a, b;
	cin >> a >> b;



	dp_16395[1][1] = 1;
	dp_16395[2][1] = 1;
	dp_16395[2][2] = 1;


	for (int i = 3; i <= a; i++) {
		
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j==i) {	//첫수거나 마지막수면 무조건 1
				dp_16395[i][j] = 1;
			}
			else{
				dp_16395[i][j] = dp_16395[i - 1][j - 1] + dp_16395[i - 1][j];
			}
			
		}

	}


	cout << dp_16395[a][b];









	return 0;
}