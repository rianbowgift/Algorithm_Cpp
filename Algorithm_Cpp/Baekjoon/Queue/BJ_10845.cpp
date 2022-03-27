#include<iostream>
#include<queue>
using namespace std;
int BJ_10845() {
	
	queue<int> arr;
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		string temp;
		cin >> temp;

		if (temp == "push") {
			int temp;
			cin >> temp;
			arr.push(temp);
		}
		else if (temp == "pop") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.front() << "\n";
				arr.pop();
			}
		}
		else if (temp == "size") {
			cout << arr.size() << "\n";
		}
		else if (temp == "empty") {
			if (arr.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (temp == "front") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.front() << "\n";
			}
			
		}
		else if (temp == "back") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.back() << "\n";
			}
			
		}

	}
	
	


	return 0;
}