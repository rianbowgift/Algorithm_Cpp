#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int n, m;
int arr[1000];
bool isused[100];
int nums[10];
string back_num;


void re(int a) {
	if (a == m) {
		string temp_num;
		for (int i = 0; i <m; i++) {
			temp_num += to_string(arr[i]);
			if (i != 0 ) {
				if (arr[i] < arr[i - 1]) {
					return;
				}
			}
		}
		//cout << temp_num;
		if (temp_num == back_num) {
			return;
		}


		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}

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
	
	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
	}

	sort(nums + 1, nums + n + 1);


	re(0);




}