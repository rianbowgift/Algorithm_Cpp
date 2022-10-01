//#include<iostream>
//using namespace std;
//
//int arr[26];
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string x;
//	cin >> x;
//	int max = 0;
//	int max_int = 0;
//	char answer;
//	bool sw = false;
//	for (int i = 0; i < x.size(); i++) {
//
//		if (x[i] >= 65 && x[i] <= 90) {
//			arr[x[i] - 65]++;
//		}
//		else {
//			arr[x[i] - 97]++;
//		}
//
//	}
//
//	for (int i = 0; i < 26; i++) {
//		if (arr[i] > max_int) {
//			max = i;
//			max_int = arr[i];
//			sw = false;
//		}
//		else if (arr[i] == max_int) {
//			sw = true;
//		}
//	}
//
//	if (sw == true) {
//		cout << "?";
//	}
//	else {
//		answer = max + 65;
//		cout << answer;
//	}
//	
//
//	
//
//
//}