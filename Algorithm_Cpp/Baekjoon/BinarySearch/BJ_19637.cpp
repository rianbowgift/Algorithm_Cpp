#include<iostream>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<string, int>> grade;

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string temp;
		int temp2;
		cin >> temp >> temp2;
		grade.push_back({ temp,temp2 });

	}




}