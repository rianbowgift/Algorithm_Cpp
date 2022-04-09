//#include<iostream>
//#include<vector>
//using namespace std;
//
//int y, x;
//vector<vector<int>> arr;
//
//
//void right(int i,int j) {
//	if (j + 1 >= x) {
//		return;
//	}
//	for (int n = j+1; n < x; n++) {
//
//			if (arr[i].at(n) <6) {
//				if (arr[i].at(n) != 0) {
//					continue;
//				}
//				arr[i].at(n) = -1;
//			}
//			else {
//				break;
//			}
//
//	}
//
//
//}
//void left(int i, int j) {
//	if (j - 1 <= 0) {
//		return;
//	}
//	for (int n = j -1; n >=0; n--) {
//
//		if (arr[i].at(n) < 6) {
//			if (arr[i].at(n) != 0) {
//				continue;
//			}
//			arr[i].at(n) = -1;
//		}
//		else {
//			break;
//		}
//
//	}
//	
//	
//	
//}
//
//void down(int i, int j) {
//	if (i + 1 >= y) {
//		return;
//	}
//
//	for (int n = i + 1; n < y; n++) {
//
//		if (arr[n].at(j) < 6) {
//			if (arr[n].at(j) != 0) {
//				continue;
//			}
//			arr[n].at(j) = -1;
//		}
//		else {
//			break;
//		}
//
//	}
//
//
//}
//void up(int i, int j) {
//	if (i - 1 <= 0) {
//		return;
//	}
//
//	for (int n = i - 1; n >= 0; n--) {
//
//		if (arr[n].at(j) < 6) {
//			if (arr[n].at(j) != 0) {
//				continue;
//			}
//			arr[n].at(j) = -1;
//		}
//		else {
//			break;
//		}
//
//	}
//
//
//}
//
//
//
//int main() {
//
//
//	
//	cin >> y >> x;
//	int min = 65;
//
//	
//	
//	
//	
//
//	for (int i = 0; i < y; i++) {
//		vector<int> arr_temp;
//		int temp_num = 0;
//		for (int j = 0; j < x; j++) {
//			cin >> temp_num;
//			arr_temp.push_back(temp_num);
//		}
//		arr.push_back(arr_temp);
//		
//	}
//
//	vector<vector<int>> arr_save = arr;	//¹é¾÷ 
//
//
//
//
//
//
//
//
//		for (int i = 0; i < y; i++) {
//			for (int j = 0; j < x; j++) {
//				if (arr[i].at(j) == 1) {
//					right(i, j);
//				}
//				else if (arr[i].at(j) == 2) {
//					right(i, j);
//					left(i, j);
//				}
//				else if (arr[i].at(j) == 3) {
//					right(i, j);
//					up(i, j);
//				}
//				else if (arr[i].at(j) == 4) {
//					right(i, j);
//					left(i, j); 
//					up(i, j);
//				}
//				else if (arr[i].at(j) == 5) {
//					right(i, j);
//					left(i, j);
//					up(i, j);
//					down(i, j);
//				}
//
//			}
//
//		}
//
//
//
//
//		
//
//	
//
//	cout << min;
//
//
//
//
//	return 0;
//}