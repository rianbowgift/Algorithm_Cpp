#include<iostream>
using namespace std;
 
int n;

int arr[20][20];
int isused[20][20];
int sum;


void re(int a) {

	if (a == n) {
		
		sum++;
		return;
	}
	



	for (int i = a; i < n; i++) {
		
		for (int j = 0; j < n; j++) {
			bool ck = false;
			if (!isused[i][j]) {
				for (int k = 0; k < n; k++) {
					if (isused[i][k]) {
						ck = true;
						break;
					}
					if (isused[k][j]) {
						ck = true;
						break;
					}


					if (0<=i-k && j+k<n ) {		//1사분면
						if (isused[i - k][j + k]) {
							ck = true;
							break;
						}
					}
					if (i + k<n && j + k < n) {	//4사분면
						if (isused[i + k][j + k]) {
							ck = true;
							break;
						}
					}
					if (i + k<n && 0<=j - k) { //3사분면
						if (isused[i + k][j - k]) {
							ck = true;
							break;
						}
					}
					if (0 <= i - k && 0<=j - k) { //2사분면
						if (isused[i - k][j - k]) {
							ck = true;
							break;
						}
					}
					
				}

				if (ck == true) {
					if (j == n-1) {
						return;
					}
					continue;
				}



				isused[i][j] = 1;
				re(a + 1);
				isused[i][j] = 0; 
			}



		}


	}



}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	re(0);
	cout << sum;


}