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

	for (int i = 0; i < 10; i++) {	// sum�� �ʱ�ȭ(�� �迭�� ��ȣ�� ���ڰ��̵ǵ���)
		sum_15312[i] = i;
		sum_15312[i + 10] = i;
	}


	for (int i = 0; i < a.length(); i++) {		//�̸���ġ��
		a_b += a[i];
		a_b += b[i];
	}
	for (int i = 0; i < a_b.length(); i++) {		//ó�� �ѹ��� �̸��� ���ڷ� �ٲ���Ѵ�...

		a_b_temp += to_string(arr[abs(-65 + a_b[i])]);	//-65�� ���ؼ� ���°��� �迭�ּ�. ������� A�� 0, Z�� 90�̳��´�

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