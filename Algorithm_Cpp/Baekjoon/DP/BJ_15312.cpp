#include<iostream>
#include<string>
using namespace std;
int arr[]{ 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int sum_15312[20];


int BJ_15312() {

	string a, b;
	cin >> a >> b;
	string a_b;
	string a_b_temp;

	for (int i = 0; i < 10; i++) {	// sum을 초기화(각 배열방 번호가 숫자값이되도록)
		sum_15312[i] = i;
		sum_15312[i + 10] = i;
	}


	for (int i = 0; i < a.length(); i++) {		//이름합치기
		a_b += a[i];
		a_b += b[i];
	}
	for (int i = 0; i < a_b.length(); i++) {		//처음 한번은 이름을 숫자로 바꿔야한다...

		a_b_temp += to_string(arr[abs(-65 + a_b[i])]);	//-65와 더해서 나온값이 배열주소. 예를들어 A면 0, Z면 90이나온다

	}
	swap(a_b_temp, a_b);
	a_b_temp = "";
	

	
	for (int j = a_b.length()-1; j > 1; j--) {
		for (int i = 0; i < j; i++) {

			a_b_temp += to_string(sum_15312[((a_b[i] - '0') + (a_b[i + 1] - '0'))]);

		}
		swap(a_b_temp, a_b);
		a_b_temp = "";
	}
	
	cout << a_b;

	
	




	return 0;
}