//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//
//int main() {
//
//
//	string s;
//	getline(cin, s);
//
//	string answer;
//	bool bracket = false;	//괄호 들어와있을땐 true
//								//공백시 괄호안인지 확인용
//	string temp = "";
//
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ' ') {
//			if (bracket) {
//				temp += ' ';
//			}
//			else {
//				//리버스후 삽입
//				reverse(temp.begin(), temp.end());
//				answer += temp;
//				answer += ' ';
//				temp = "";
//
//			}
//			continue;
//		}
//		if (s[i] == '<') {
//			if (temp.length() >= 1) {
//				reverse(temp.begin(), temp.end());
//				answer += temp;
//				temp = "";
//			}
//			bracket = true;
//			temp += '<';
//			continue;
//		}
//		if (s[i] == '>') {
//			temp += '>';
//			answer += temp;
//			temp = "";
//			bracket = false;
//			continue;
//		}
//
//		temp += s[i];
//
//	}
//	if (temp.length() >= 1) {
//		reverse(temp.begin(), temp.end());
//		answer += temp;
//	}
//
//
//	cout << answer;
//
//
//}