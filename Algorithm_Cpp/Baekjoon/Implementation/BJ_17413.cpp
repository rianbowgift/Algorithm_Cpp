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
//	bool bracket = false;	//��ȣ ���������� true
//								//����� ��ȣ������ Ȯ�ο�
//	string temp = "";
//
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ' ') {
//			if (bracket) {
//				temp += ' ';
//			}
//			else {
//				//�������� ����
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