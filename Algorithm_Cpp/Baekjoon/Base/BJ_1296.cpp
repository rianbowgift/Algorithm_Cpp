//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//string arr[51];
//int sum_answer[51];
//int main() {
//
//	string name;
//	cin >> name;
//
//	int x;
//	cin >> x;
//	for (int i = 0; i < x; i++) {
//		string temp;
//		cin >> temp;
//		arr[i] = temp;
//
//	}
//
//	sort(arr, arr + x);
//
//	for (int i = 0; i < x; i++) {
//		int temp_sum[4];
//		fill_n(temp_sum, 4, 0);
//		for (int j = 0; j < arr[i].size(); j++) {
//			if (arr[i][j] == 'L') {
//				temp_sum[0]++;
//			}
//			else if (arr[i][j] == 'O') {
//				temp_sum[1]++;
//			}
//			else if (arr[i][j] == 'V') {
//				temp_sum[2]++;
//			}
//			else if (arr[i][j] == 'E') {
//				temp_sum[3]++;
//			}
//		}
//		for (int j = 0; j < name.size(); j++) {
//			if (name[j] == 'L') {
//				temp_sum[0]++;
//			}
//			else if (name[j] == 'O') {
//				temp_sum[1]++;
//			}
//			else if (name[j] == 'V') {
//				temp_sum[2]++;
//			}
//			else if (name[j] == 'E') {
//				temp_sum[3]++;
//			}
//		}
//
//		sum_answer[i] = ((temp_sum[0] + temp_sum[1])* (temp_sum[0] + temp_sum[2])* (temp_sum[0] + temp_sum[3])* (temp_sum[1] + temp_sum[2])* (temp_sum[1] + temp_sum[3])* (temp_sum[2] + temp_sum[3])) % 100;
//
//	}
//
//
//	int max = 0;
//	int max_index = 0;
//	for (int i = 0; i < x; i++) {
//		if (sum_answer[i] > max) {
//			max = sum_answer[i];
//			max_index = i;
//		}
//	}
//
//	cout << arr[max_index];
//
//
//
//}