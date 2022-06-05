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
	



	for (int i = 0; i < n; i++) {
		
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

					if(isused[i][j])

					//if (isused[i-k][j+k]) {
					//	ck = true;
					//	break;
					//}
					//if (isused[i+k][j+k]) {
					//	ck = true;
					//	break;
					//}
					//if (isused[i+k][j-k]) {
					//	ck = true;
					//	break;
					//}
					//if (isused[i-k][j-k]) {
					//	ck = true;
					//	break;
					//}
					
				}

				if (ck == true) {
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