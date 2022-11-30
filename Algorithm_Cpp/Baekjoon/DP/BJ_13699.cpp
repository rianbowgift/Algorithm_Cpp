#include<iostream>
using namespace std;

long long arr[500];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;

	arr[0] = 1;

	for (int i = 1; i <= n; i++) {
		long long temp = 0;
		for (int x = 0; x < i; x++) {
			temp += arr[x] * arr[i - x-1];
		}
		arr[i] = temp;
	}

	cout << arr[n];

}