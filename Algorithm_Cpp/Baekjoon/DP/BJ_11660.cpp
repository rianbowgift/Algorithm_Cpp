#include<iostream>
#include<vector>
using namespace std;

int arr[1050][1050];
				//x,y
vector<vector<pair<int, int>>>sum;
//int sum[10000][pair<int,int>];

int main() {

	int n,m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	//0번배열 채우기
	for (int i = 0; i < n; i++) {
		vector<pair<int, int>> temp;

		sum.push_back(temp);

	}




}