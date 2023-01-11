//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	vector<pair<int, int>> input;	//판매가격,실제이득
//	for (int i = 0; i < n; i++) {
//		int temp1;
//		int temp2;
//		cin >> temp1 >> temp2;
//		input.push_back({ temp1,temp1-temp2 });
//	}
//
//	
//	sort(input.begin(), input.end());
//
//
//	vector<pair<int, int>> output;//여기까지 가격총합,최소판매가격
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		max += input[i].second;
//		output.push_back({ max,input[i].first });
//	}
//
//	int answer_maxd = 0;
//	int answer_num = 0;
//	for (int i = 0; i < n; i++) {
//		if (output[i].first > answer_maxd) {
//			answer_maxd = output[i].first;
//			answer_num = output[i].second;
//		}
//	}
//
//	cout << answer_num;
//
//
//
//
//}