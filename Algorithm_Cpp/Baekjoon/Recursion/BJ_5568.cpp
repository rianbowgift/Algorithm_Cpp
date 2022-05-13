//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int a;
//vector<int> nums;
//void re(vector<int> arr, int b,int c) {
//	
//	vector<int> arr_temp = arr;
//
//
//	if (b == 0) {
//		nums.push_back(c);
//		return;
//	}
//	
//	for (int i = 0; i < arr_temp.size(); i++) {
//		string temp;
//		if (c == 0) {	//아무것도없을때
//			temp = to_string(arr_temp[i]);
//		}
//		else {
//			temp = to_string(c) + to_string(arr_temp[i]);
//		}
//
//		//int temp_i = arr[i];
//		arr_temp.erase(arr_temp.begin()+i);
//		re(arr_temp, b - 1, stoi(temp));
//		arr_temp = arr;
//
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int b;
//	cin >> a >>b ;
//	vector<int> arr;
//	
//
//	for (int i = 0; i < a; i++) {
//		int temp;
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//
//	re(arr, b,0);
//
//
//	sort(nums.begin(), nums.end());
//	nums.erase(unique(nums.begin(), nums.end()),nums.end());
//	
//	cout << nums.size();
//	//for (int i = 0; i < nums.size(); i++) {
//	//	cout << nums[i] << "\n";
//	//}
//
//
//}