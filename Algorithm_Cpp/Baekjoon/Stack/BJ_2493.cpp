#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a;
	cin >> a;
	stack<int> st;
	vector<int> arr;		//포인터 저장
	for (int i = 0; i < a; i++) {
		int temp;
		cin >> temp;
		st.push(temp);
		arr.push_back(0);
	}

	int a_temp = a - 1;
	int save_pos = a;
	while (!st.empty()) {
		int temp = st.top();
		st.pop();

		if (st.empty()) {
			break;
		}

		if (temp < st.top()) {
			if (save_pos != a) {
				for (int i = a_temp; i <= save_pos; i++) {
					if (arr[i] < st.top()) {
						arr[i] = a_temp;
					}
					else {
						arr[i] = 0;
					}
				}
				save_pos == a;
			}
		}
		else {
			if (save_pos == a) {
				save_pos = a_temp;
			}
			arr[a_temp] = temp;
		}

		a_temp--;

		




	}


	//6 9 5 7 4


	

	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}

	


}