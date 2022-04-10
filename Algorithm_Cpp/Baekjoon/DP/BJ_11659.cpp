#include<iostream>
using namespace std;


int sum[100002];


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int a, b;


	cin >> a >> b;

	for (int i = 1; i <= a; i++) {
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}
	

	for (int i = 0; i < b; i++) {
		int x, y;
		cin >> x >> y;

		cout << sum[y] - sum[x - 1] << '\n';

	}
	


}