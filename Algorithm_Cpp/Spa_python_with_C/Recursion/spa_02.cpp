//#include<iostream>
//using namespace std;
//
//
//bool re(string n) {
//	bool answer;
//	if (n.length() == 1) {
//		return true;
//	}
//	if (n.length() == 2) {
//		if (n[0] == n[1]) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	
//
//	char st = n[0];
//	//cout << n[0];
//	//cout << n[1];
//	//cout << n[2];
//	char en = n[n.length() - 1];
//
//	string next = "";
//	if (st == en) {
//		for (int i = 1; i < n.length()-1; i++) {
//			next += n[i];
//		}
//		answer = re(next);
//	}
//	else {
//		return false;
//	}
//	return answer;
//}
//
//
//int main() {
//	string n = "abcba";
//
//	if (re(n)) {
//		cout << "True";
//	}
//	else {
//		cout << "False";
//	}
//
//
//		
//
//
//}