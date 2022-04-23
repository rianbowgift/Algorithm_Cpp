#include<iostream>
#include<algorithm>
using namespace std;


int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int a;

	cin >> a;
	int* arr = new int[a];


	for (int i = 0; i < a; i++) {
		cin >> arr[i];

	}


	int* arr2 = new int[a];
	copy(arr, arr + a, arr2);

	sort(arr2, arr2 + a);



	int index = 0;
	int prev = 0;
	for (int i = 0; i < a; i++) {
		
		int temp = arr2[i];
		if (prev == temp) {
			index--;
		}
		prev = temp;
		for (int j = 0; j < a; j++) {
			if (arr2[i] == arr[j]) {
				arr[j] = index;
				break;
			}
		}
		index++;
		
	}

	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}

	

		


	
	






}