#include<iostream>
#include<algorithm>
#include<list>
#include<string>
using namespace std;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	list<char> edit_list;

	string a;
	int b;

	cin >> a;

	for (int i = 0; i < a.size(); i++) {
		edit_list.push_back(a.at(i));
	}

	list<char>::iterator iter = edit_list.end();	//커서의 맨 처음위치 = 문장의 맨뒤

	//cout << *iter;

	cin >> b;
	for (int z = 0; z < b; z++) {

		char x;
		cin >> x;

		if (x == 'L') {
			if (iter != edit_list.begin()) {
				--iter;
			}
		}
		else if (x == 'D') {
			
			if (iter != edit_list.end()) {
				++iter;
			}
		}
		else if (x == 'B') {
			
			if (iter != edit_list.begin()) {
				--iter;
				iter = edit_list.erase(iter);
			}
			
		
		}
		else if (x == 'P') {
			char temp;
			cin >> temp;
			edit_list.insert(iter, temp);
		}




	}

	for (list<char>::iterator i = edit_list.begin(); i != edit_list.end(); i++) {
		cout << *i;
	}
	


}