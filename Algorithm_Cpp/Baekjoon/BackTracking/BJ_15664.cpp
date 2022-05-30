#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int n, m;
int arr[1000];
bool isused[100];


void re(int a) {

		back_num = temp_num;

		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		
		if (!isused[i]) {
			arr[a] = nums[i];
			isused[i] = 1;
			re(a + 1);
			isused[i] = 0;
		}

	}





}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	


	re(0);




}