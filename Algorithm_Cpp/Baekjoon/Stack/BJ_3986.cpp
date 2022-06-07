#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	int count = 0;

	for (int k = 0; k < n; k++) {
		string temp;
		cin >> temp;

		stack<char> st;
		bool sw = true;

		if (temp.size() % 2 != 0) {//È¦¼ö¸é Á¦¿Ü 
			continue;
		}
		
		int sized = temp.size();

		for(int i=0;)


	}

	cout << count;



}