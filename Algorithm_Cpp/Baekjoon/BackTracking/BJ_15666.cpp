#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int n, m;
int arr[1000];
bool isused[100];
int nums[10];
vector<string> save;

void re(int a,int back) {
	if (a == m) {
		
		if (!save.empty()) {
			string temp;
			for (int i = 0; i < m; i++) {
				temp += to_string(arr[i]);
			}


			if (save.back() == temp) {
				return;
			}
			else {
				save.push_back(temp);
			}
		}


		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		if (save.empty()) {
			string temp;
			for (int i = 0; i < m; i++) {
				temp += to_string(arr[i]);
			}
			save.push_back(temp);
		}
		
		cout << "\n";
		return;
	}
	int bk = 0;
	for (int i = back; i <= n; i++) {

		if (bk != nums[i]) {
			arr[a] = nums[i];
			bk = nums[i];
			re(a + 1,i);

		}

	}





}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	vector<int> num;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;

		num.push_back(temp);
	}

	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()), num.end());
	
	for (int i = 0; i < num.size(); i++) {
		nums[i+1] = num[i];

	}

	n = num.size();
	
	re(0,1);




}