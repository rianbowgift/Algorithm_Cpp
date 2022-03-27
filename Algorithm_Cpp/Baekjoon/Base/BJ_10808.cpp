#include<iostream>
#include<vector>
using namespace std;

int BJ_10808() {
	string a;
	cin >> a;
	int arr[26];
	fill(arr, arr + 26,0);




	for (int i = 0; i < a.size(); i++) {
		
		arr[a.at(i)-97] += 1; 
		
		
	}
	
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	

	return 0;


}