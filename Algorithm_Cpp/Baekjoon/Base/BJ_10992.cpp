#include<iostream>

int BJ_10992() {
	int a;

	std::cin >> a;


	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a - i-1;j++) {		//������º� 
			std::cout << " ";
		}

		if (i == 0 || i == a - 1) {	//ó���� �������϶� �Ϲ� �����
			for (int j = 0; j < ((i + 1) * 2) - 1; j++) {
				std::cout << "*";

			}
		}
		else {	//�׿ܿ��� �߾ӻ������
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