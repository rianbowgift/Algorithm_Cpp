#include<iostream>

int BJ_10992() {
	int a;

	std::cin >> a;


	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i-1;j++) {		//공백출력부 
			std::cout << " ";
		}

		if (i == 0 || i == a - 1) {	//처음과 마지막일땐 일반 별찍기
			for (int j = 0; j < ((i + 1) * 2) - 1; j++) {
				std::cout << "*";

			}
		}
		else {	//그외에는 중앙뺀별찍기
			for (int j = 0; j < ((i + 1) * 2) - 1; j++) {
				if (j == 0 || j== ((i + 1) * 2) - 2) {
					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
				

			}
		}




		std::cout << std::endl;

	}



	return 0;


}