#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,m;
	queue<int> wet_q;
	vector<int> car;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		wet_q.push(temp);
	}
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		car.push_back(temp);
	}


}