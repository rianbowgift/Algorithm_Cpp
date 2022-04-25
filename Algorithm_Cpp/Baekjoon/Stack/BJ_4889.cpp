#include<iostream>
#include<stack>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt = 1;

	while (true) {
		string temp;
		
		cin >> temp;
		int sum = 0;
		stack<int> st;
	
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '-') {
				return 0;
			}
			if (st.empty()) {
				st.push(temp[i]);
				continue;
			}
			else {
				if (temp[i] == '{') {
					st.push(temp[i]);
					continue;
				}
				else {
					if (st.top() == '{' && temp[i] == '}') {
						st.pop();
						continue;
					}
					else {
						st.push(temp[i]);
					}

				}





				
			}
			

		}




		while (!st.empty()) {
			if (st.top() == '{') {
				st.pop();
				if (st.top() == '{') {
					sum += 1;
					st.pop();
					continue;
				}
				else {
					sum += 2;
					st.pop();
					continue;
				}
			}
			else{
				if (st.top() == '}') {
					st.pop();
					if (st.top() == '{') {
						sum += 0;
						st.pop();
						continue;
					}
					else {
						sum += 1;
						st.pop();
						continue;
					}
				}
			}
		}


		
		
		cout << cnt++ << ". " << sum << "\n";
		


	}




}