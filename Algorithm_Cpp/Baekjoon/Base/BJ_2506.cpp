#include<iostream>

int BJ_2506() {
	int a;
	
	std::cin >> a;

	int* arr = new int[a];
	int back_num = 0;
	int sum = 0;

	for (int i = 0; i < a ; i++) {
		std::cin >> arr[i];
	}


	for (int i = 0; i < a; i++) {
		if (arr[i] == 0) {
			back_num = 0;
			continue;
		}
		else {
			sum += back_num + 1;
			back_num++;
		}

	}

	std::cout << sum;
	
	
	return 0;




}