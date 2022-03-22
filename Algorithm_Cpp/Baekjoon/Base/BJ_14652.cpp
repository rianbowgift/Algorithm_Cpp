#include<iostream>
using namespace std;

int BJ_14652() {

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			
			if (c == 0) {
				cout << i << " " << j;
				return 0;
			}
			c--;
		}
	}


	

}