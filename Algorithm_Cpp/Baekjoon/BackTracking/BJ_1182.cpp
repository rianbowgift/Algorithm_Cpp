#include<iostream>
#include<vector>
using namespace std;


int n, s;
//int arr[1000];
vector<int> arr2;
bool isused[100];
int nums[100];
int sum;

void re(int k) {
	if (k == n) {
		int temp = 0;
		int size = arr2.size();
		for (int i = 0; i < size; i++) {
			temp += arr2.back();
			arr2.pop_back();
		}
		if (s == temp) {
			sum++;
		}
		return;
	}
	


	for (int i = k; i < n; i++) {
		
		if (!isused[i]) {
			
			arr2.push_back(nums[i]);
		
			isused[i] = 1;
			re(k+1);
			isused[i] = 0;
		}

	}
	

}



int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}




	for (int i = 0; i < n; i++) {
		re(0);
	}


	cout << sum;
	



	
}