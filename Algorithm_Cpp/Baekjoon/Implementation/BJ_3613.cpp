//#include<iostream>
//using namespace std;
//
//int main() {
//
//	//자바형 
//	//첫단어를 제외하고 두번째단어부터 대문자시작
//	//->c에서는 대문자->소문자후 앞에 _붙이기
//
//	//처음만난 단어가 영어대문자면 자바형
//	//처음만난 단어가 _이라면 C형
//	//자바형이나 c형이 주어진 이후 형이바뀌면 에러
//
//	string s;
//	cin >> s;
//	int type = 0;	//0=노타입 1=자바 2=c
//	string answer;
//	bool next_big = false;	//c에서 자바로 바꿀때
//						//다음문자 대문자해야할때 true
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
//		if (s[i] == '_') {	//c타입일때
//			//타입이 바뀔때 타입검사
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
//		if (s[i] >= 'A' && s[i] <= 'Z') {//java타입일때
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