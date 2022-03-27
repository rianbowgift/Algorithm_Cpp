#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;







int main() {
	int n;
	cin >> n;

	stack<int> arr;

	

	for (int i = 0; i < n; i++) {
		string temp;
		int push_temp;
		cin >> temp;
		if (temp == "push") {
			cin >> push_temp;
			
			arr.push(push_temp);
		}
		else if (temp == "pop") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.top() << "\n";
				arr.pop();
			}
		}
		else if (temp == "size") {
			cout << arr.size() << "\n";
		}
		else if (temp == "empty") {
			cout << arr.empty() << "\n";
		}
		else if (temp == "top") {
			if (arr.empty()) {
				cout << "-1" << "\n";
				
			}
			else {
				cout << arr.top() << "\n";
			}
		}

		
	}

	return 0;


}