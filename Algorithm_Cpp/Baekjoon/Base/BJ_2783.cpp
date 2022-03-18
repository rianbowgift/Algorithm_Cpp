#include<iostream>


int BJ_2783() {
	int a, b,c;
	
	std::cin >> a >> b >> c;

	double* arr = new double[c+1];
	//arr[0] = double(a) / double(b);
	double min = double(a) / double(b);

	for (int i = 0; i < c; i++) {
		int temp_a;
		int temp_b;

		std::cin >> temp_a >> temp_b;
		//arr[i + 1] = temp_a / temp_b;
		if (min > (double)temp_a / (double)temp_b) {
			min = (double)temp_a / (double)temp_b;
		}
	}

	std::cout << min * 1000;


	
	
	







}