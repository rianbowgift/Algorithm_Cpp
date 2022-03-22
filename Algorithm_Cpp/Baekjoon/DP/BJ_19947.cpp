#include<iostream>
using namespace std;


int dp_19947[11];
int sssssss() {

	int a, b;
	

	cin >> a >> b;
	

	dp_19947[1] = a + ((a / 100) * 5);
	dp_19947[3] = a + ((a / 100) * 20);
	dp_19947[5] = a + ((a / 100) * 35);

	for (int i = 2; i <= 10; i++) { //우선순위를 큰것부터. 5->3->1

		if (!dp_19947[i]) {
			
			if (i % 5 == 0 && i>5) {
				dp_19947[i] = dp_19947[i - 5] + ((dp_19947[i - 5] / 100) * 35);
			}
			else if( i % 3 ==0 && i>3) {
				dp_19947[i] = dp_19947[i - 3] + ((dp_19947[i - 3] / 100) * 20);
			}
			else {
				dp_19947[i] = dp_19947[i - 1] + ((dp_19947[i - 1] / 100) * 5);
			}




		}


	}


	cout << dp_19947[b];


	return 0;
}