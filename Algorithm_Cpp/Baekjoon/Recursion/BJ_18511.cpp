//#include<iostream>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//int a;
//int b;
//int maxnum = 0;
//
//void reculsion(int num,int* arr) {
//	string st_num;
//	if (a < num) {
//		return;
//	}
//	else {
//		if (num >= maxnum) {
//			maxnum = num;
//		}
//		for (int i = 0; i < b; i++) {
//			if (num == 0) {
//				st_num = to_string(arr[i]);
//			}
//			else {
//				st_num = to_string(arr[i]) + to_string(num);
//			}
//			//cout << "num = " << num << " i = " << i << " maxnum = " << maxnum << "\n";
//
//			reculsion(stoi(st_num), arr);
//				
//				
//
//				
//
//				
//			
//			
//		}
//
//
//
//
//
//	}
//	
//	
//	
//
//}
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> a >> b;
//	int* arr = new int[b];
//
//	for (int i = 0; i < b; i++) {
//		cin >> arr[i];
//	}
//
//	sort(arr,arr+b);
//
//	reculsion(0, arr);
//	cout << maxnum;
//
//
//
//	
//
//}