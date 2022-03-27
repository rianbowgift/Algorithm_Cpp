#include<iostream>
using namespace std;

void insert(int idx, int num, int arr[], int& len) {
	
	for (int i = len; i >= idx; i--) {
		arr[i + 1] = arr[i];
	}
	arr[idx] = num;
	len += 1;


}

void erase(int idx, int arr[], int& len) {
	
	for (int i = idx; i <= len; i++) {
		arr[i] = arr[i + 1];
	}

	len -= 1;
	

}



int q1() {

	int arr[10] = { 10,50,40,30,70,20 };
	int len = 6;
	insert(3, 60, arr, len);


	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	erase(4, arr, len);


	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}



	return 0;
}