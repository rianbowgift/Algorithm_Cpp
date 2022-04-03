#include<iostream>
using namespace std;

int n,m;
int arr[10];
int isused[10];

void backtrack(int k) {
	if (m ==k) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i < n; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = 1;
			backtrack(k + 1);
			isused[i] = 0;

		}
	}
	


}

int main() {

	
	cin >> n >> m;
	backtrack(0);


	return 0;
}