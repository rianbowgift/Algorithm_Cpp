#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	int a, b;
	cin >> a >> b;
	int* arr_a = new int[a];
	int* arr_b = new int[b];
	int* arr_c = new int[a + b];
	int a_pointer = 0;
	int b_pointer = 0;
	int c_pointer = 0;

	for (int i = 0; i < a; i++) {
		cin >> arr_a[i];
	}

	for (int i = 0; i < b; i++) {
		cin >> arr_b[i];
	}



	while (true) {
		if (c_pointer == a + b) {
			break;
		}
		if (a_pointer == a) {
			arr_c[c_pointer] = arr_b[b_pointer];
			b_pointer++;
			c_pointer++;
			continue;

		}
		if (b_pointer == b) {
			arr_c[c_pointer] = arr_a[a_pointer];
			a_pointer++;
			c_pointer++;
			continue;
		}

		if (arr_a[a_pointer] >= arr_b[b_pointer]) {
			arr_c[c_pointer] = arr_b[b_pointer];
			c_pointer++;
			b_pointer++;
		}
		else {
			arr_c[c_pointer] = arr_a[a_pointer];
			c_pointer++;
			a_pointer++;
		}

		


	}

	for (int i = 0; i < a + b; i++) {
		cout << arr_c[i] << " ";
	}


	return 0;
}