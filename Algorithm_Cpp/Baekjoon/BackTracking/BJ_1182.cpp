#include<iostream>
using namespace std;


int a, b;
int* arr = new int[a];
int sum;

void back(int count) {
	if (a == 1) {
		
	}
	else {
		int temp=0;
		for (int i = count; i <= a; i++) {
			temp += arr[i];
			if (temp == b) {
				sum++;
			}
		}


		back(count+1);


	}

	

}



int main() {

	int a, b;

	cin >> a >> b;
	

	back(0);

}