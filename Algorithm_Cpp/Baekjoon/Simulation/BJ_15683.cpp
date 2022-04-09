#include<iostream>
#include<vector>
using namespace std;


int main() {

	int y, x;

	cin >> y >> x;
	vector<vector<int>> arr(y, vector<int>(x, 0));

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> arr[i][j];
		}
	}
	
	









	return 0;
}