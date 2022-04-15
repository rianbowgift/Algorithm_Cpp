#include<iostream>
#include<algorithm>

using namespace std;


long long arr[1000000];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	long long num = 10000000;	//mxval
	int count = 0;	//maxcnt
	int temp_count = 0;	//cnt




	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}

	sort(arr,arr+a);

	for (int i = 0; i < a; i++) {
		if (i == 0 || arr[i-1] == arr[i]) {
			temp_count++;

		}
		else {
			if (temp_count > count) {
				count = temp_count;
				num = arr[i-1];
				
			}
			temp_count = 1;
		}

	}

	if (temp_count > count) {
		num = arr[a - 1];
	}
	cout << num;




}