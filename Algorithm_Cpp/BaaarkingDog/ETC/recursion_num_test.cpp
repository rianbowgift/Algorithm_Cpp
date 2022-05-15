//#include<iostream>
//#include<vector>
//using namespace std;
//
//int max_num=0;
//vector<int> arr;
//
//int recursion(vector<int> &num) {
//
//	int temp = num.back();
//	num.pop_back();
//	if (num.empty()) {
//		return temp;
//	}
//	if (temp - 1 == num.back()) {
//		return temp + recursion(num);
//	}
//	else {
//		return temp;
//	}
//
//
//	
//
//
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	int a;	//a만큼 숫자받음
//	cin >> a;
//
//
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//
//	while (!arr.empty()) {
//		int sum = recursion(arr);
//		if (sum > max_num) {
//			max_num = sum;
//		}
//	}
//
//	cout << max_num;
//
//
//}