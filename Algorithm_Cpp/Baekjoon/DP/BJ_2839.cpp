#include<iostream>
using namespace std;

int BJ_2839() {
	int n;
	cin >> n;
	int* arr = new int[n+1];
	//int arr[5000];

	for (int i = 0; i < n+1; i++) {
		arr[i] = 0;
	}

	arr[3] = 1;
	arr[5] = 1;
	for (int i = 6; i < n+1; i++) {
		if (arr[i - 3]) {	//0이면 false 0아니면 true
			arr[i] = arr[i - 3] + 1;
		}
		if (arr[i - 5]) {	

			if (arr[i - 3]) {	//만약 공배수라면?

				int temp = min(arr[i - 3], arr[i - 5]);
				arr[i] = temp + 1;
			}
			else {

				arr[i] = arr[i - 5] + 1;
			}
			
		}
	}

	if (arr[n]) {
		cout << arr[n];
	}
	else {
		cout << "-1";
	}
	

	return 0;


}