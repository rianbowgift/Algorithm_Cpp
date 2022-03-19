#include<iostream>

int BJ_5354() {
	int n;
	std::cin >> n;
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}



	for (int k = 0; k < n; k++) {	//arr크기만큼 반복
		
		for (int i = 0; i < arr[k]; i++) {//arr[i]의 높이
			
			if (i == 0 || i == arr[k] - 1) {
				for (int j = 0; j < arr[k]; j++) {
					std::cout << "#";
				}
			}
			else {
				for (int j = 0; j < arr[k]; j++) {
					if (j == 0 || j == arr[k] - 1) {
						std::cout << "#";
					}
					else {
						std::cout << "J";
					}
					
				}
			}

			std::cout << std::endl;



		}



		std::cout << std::endl;

	}
	





	return 0;
}