#include<iostream>
#include<map>
using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);



	int n;
	cin >> n;
	int a, b;


	
	for (int i = 0; i < n; i++) {
		cin >> a;
		map<int, int> arr1;

		for (int i = 0; i < a; i++) {
			int temp;
			cin >> temp;
			arr1.insert({ temp,1 });

		}

		cin >> b;
		int* arr2 = new int[b];


		for (int i = 0; i < b; i++) {
			int temp;
			cin >> temp;

			//cout << "ÀÌ°ÅÀÓ -> " << arr1[temp] << " \n";

			if (arr1[temp]) {
				arr2[i] = 1;
			}
			else {
				arr2[i] = 0;
			}
		}

		for (int i = 0; i < b; i++) {
			cout << arr2[i] << "\n";
		}

		
	}





}