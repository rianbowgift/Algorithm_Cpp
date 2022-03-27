#include<iostream>
#include<stack>
#include<string>

using namespace std;





int BJ_4949() {

	while (true) {

		string a;
		getline(cin, a);
		if (a.size() == 1 && a == ".") {
			break;
		}

		stack<char> arr;



		for (int i = 0; i < a.size(); i++) {
			if (a.at(i) == '(') {
				arr.push('(');
			}
			else if (a.at(i) == ')') {
				if (arr.empty()) {
					cout << "no" << "\n";
					break;
				}

				if (arr.top() == '(') {
					arr.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
			else if (a.at(i) == '[') {
				arr.push('[');
			}
			else if (a.at(i) == ']') {
				if (arr.empty()) {
					cout << "no" << "\n";
					break;
				}
				if (arr.top() == '[') {
					arr.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}

			if (i == a.size() - 1) {
				if (arr.empty()) {
					cout << "yes" << "\n";
					break;
				}
				else {
					cout << "no" << "\n";
					break;
				}


			}
			
		}


		

	}

	return 0;
}