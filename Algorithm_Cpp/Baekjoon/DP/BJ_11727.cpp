#include<iostream>
using namespace std;

long long dp_11727[1001];

int BJ_11727() {

	int n;
	cin >> n;
	

	//Ȧ���� = ������ *2 -1(�������Ѱ�)
	//¦���� = ������ *2+1;
	dp_11727[1] = 1;
	dp_11727[2] = 3;
	
	
	for (int i = 3; i <= n; i++) {
		if (i % 2 == 0) { //¦����
			dp_11727[i] = ((dp_11727[i - 1]*2) + 1)%10007;
		}
		else {
			dp_11727[i] = ((dp_11727[i - 1] * 2) - 1) % 10007;
		}

	}

	cout << dp_11727[n];


	







	return 0;


}