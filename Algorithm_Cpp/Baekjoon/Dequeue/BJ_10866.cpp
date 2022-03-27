#include<iostream>
#include<deque>
using namespace std;

int BJ_10866() {

	int a;
	cin >> a;
	deque<int> arr;

	

	for (int i = 0; i < a; i++) {
		string temp;
		cin >> temp;

		if (temp == "push_front") {
			int temp_int;
			cin >> temp_int;
			
			arr.push_front(temp_int);
		}
		else if (temp == "push_back") {
			int temp_int;
			cin >> temp_int;

			arr.push_back(temp_int);

		}
		else if (temp == "pop_front") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.front() << "\n";
				arr.pop_front();
			}
		}
		else if (temp == "pop_back") {
			if (arr.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << arr.back() << "\n";
				arr.pop_back();
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