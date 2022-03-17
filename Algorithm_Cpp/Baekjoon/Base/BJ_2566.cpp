#include<iostream>

int main() {


	int arr[9][9];
	int max = 0;
	int max_i = 0;
	int max_j = 0;
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> arr[i][j];
			
			if (arr[i][j] > max) {
				max_i = i + 1;
				max_j = j + 1;
				max = arr[i][j];
			}
		}

	}

	std::cout << max<< std::endl << max_i << " " << max_j;

	return 0;


}