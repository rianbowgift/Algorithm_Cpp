//#include<iostream>
//using namespace std;
//
//int main() {
//
//	//�ڹ��� 
//	//ù�ܾ �����ϰ� �ι�°�ܾ���� �빮�ڽ���
//	//->c������ �빮��->�ҹ����� �տ� _���̱�
//
//	//ó������ �ܾ ����빮�ڸ� �ڹ���
//	//ó������ �ܾ _�̶�� C��
//	//�ڹ����̳� c���� �־��� ���� ���̹ٲ�� ����
//
//	string s;
//	cin >> s;
//	int type = 0;	//0=��Ÿ�� 1=�ڹ� 2=c
//	string answer;
//	bool next_big = false;	//c���� �ڹٷ� �ٲܶ�
//						//�������� �빮���ؾ��Ҷ� true
//
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '_' && i==0) {
//			cout << "Error!";
//			return 0;
//		}
//		if (i == s.length() - 1 && s[i] == '_') {
//			cout << "Error!";
//			return 0;
//		}
//		if (next_big == true && s[i] == '_') {
//			cout << "Error!";
//			return 0;
//		}
//		if (i == 0) {
//			if (s[i] >= 'A' && s[i] <= 'Z') {
//				cout << "Error!";
//				return 0;
//			}
//			answer += s[i];
//			continue;
//		}
//		if (s[i] == '_') {	//cŸ���϶�
//			//Ÿ���� �ٲ� Ÿ�԰˻�
//			if (type == 0) {
//				type = 2;
//			}
//			if (type == 1) {
//				cout << "Error!";
//				return 0;
//			}
//			next_big = true;
//			continue;
//		}
//		if (s[i] >= 'A' && s[i] <= 'Z') {//javaŸ���϶�
//			if (type == 0) {
//				type = 1;
//			}
//			if (type == 2) {
//				cout << "Error!";
//				return 0;
//			}
//			answer += '_';
//			answer += s[i] + 32;
//			continue;
//		}
//
//
//		if (s[i] >= 'a' && s[i] <= 'z') {
//			if (next_big == true) {
//				next_big = false;
//				answer += s[i] - 32;
//				continue;
//			}
//			answer += s[i];
//			continue;
//		}
//		
//
//	}
//
//	cout << answer;
//
//
//}