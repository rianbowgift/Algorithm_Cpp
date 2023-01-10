//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	int answer = -1;
//	int n;
//	cin >> n;
//	int count = 0;
//	int index = -1;	//지금 가르키는사람의 인덱스
//	vector<int> arr;
//
//	for (int i = 0; i <n; i++) {
//		arr.push_back(i+1);
//	}
//	while (!arr.empty()) {
//		if (count == 27) {
//			count = 0;
//			cout << index << "1";
//			answer = arr[index];
//			cout << index << "2";
//			arr.erase(arr.begin()+index);
//			sort(arr.begin(), arr.end());
//			continue;
//		}
//		count++;
//		if (index >= arr.size()-1) {
//			index = 0;
//		}
//		else {
//			index++;
//		}
//		
//	}
//
//	cout << answer;
//
//
//}