//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//string arr[105];
//
//int gcd(int a, int b) {
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//}
//
//int main() {
//	int n;
//	cin >> n;
//	cin.ignore();
//	cin.clear();
//
//
//	for (int q = 0; q < n; q++) {
//		
//
//		string str;
//		getline(cin, str);
//
//		//1.나누고
//		int temp_index = 0;
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] != ' ') {
//				arr[temp_index] += str[i];
//			}
//			else if(str[i] == '-') {
//				arr[temp_index] += str[i];
//			}
//			else {
//				temp_index++;
//			}
//		}
//
//
//
//
//		//2.gcd검사
//		int max = -2147483647;
//		for (int i = 0; i <= temp_index; i++) {
//			for (int j = i; j <= temp_index; j++) {
//				if (i == j) {
//					continue;
//				}
//				if (gcd(stoi(arr[i]), stoi(arr[j]))  >= max) {
//					max = gcd(stoi(arr[i]), stoi(arr[j]));
//				}
//			}
//		}
//
//		cout << max << "\n";
//
//
//
//
//	}
//	
//
//}