//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string n;
//	string word;
//	int answer = 0;
//	int index = 0;
//	getline(cin, n);
//	getline(cin, word);
//	string t_word;
//
//	//find??
//	for (int i = 0; i < n.size(); i++) {
//
//		if (n[i] == word[index]) {
//			t_word += word[index];
//			index++;
//		}
//		else {
//			index = 0;
//			t_word = "";
//			t_word += word[index];
//			index++;
//		}
//		if (t_word == word) {
//			answer++;
//			index = 0;
//			t_word = "";
//		}
//
//	}
//
//	cout << answer;
//
//
//}