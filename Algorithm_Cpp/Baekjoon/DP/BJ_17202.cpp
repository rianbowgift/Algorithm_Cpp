#include<iostream>
#include<string>
using namespace std;

int sum[20];
int BJ_17202() {

	string a, b;
	string a_b;
	string a_b_temp;
	cin >> a >> b;
	
	for (int i = 0; i < 10; i++) {	//DP를위한 배열초기화. 각숫자에맞는 값이 입력된다
		sum[i] = i;
		sum[i + 10] = i;
	}
	
	

	for (int i = 0; i < 8; i++) {	//번호 2개를 1개로 병합
		a_b += a.at(i);
		a_b += b.at(i);
		
	}




	for (int j = 15; j > 1; j--) {
		for (int i = 0; i < j; i++) {
			a_b_temp += to_string(sum[((a_b[i] - '0') + (a_b[i + 1] - '0'))]);		//i와 i+1을 더한배열에 -'0'을 연산하여 int로 변환한후 배열에서 해당하는값을 찾아 넣는다

		}
		swap(a_b_temp, a_b);
		a_b_temp = "";
	}

	cout << a_b << endl;


	return 0;
}