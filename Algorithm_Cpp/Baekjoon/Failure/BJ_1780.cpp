//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[2200][2200];
//
//int minus_one;
//int zero;
//int one;
//int save;
//
//
//vector<int> re(int a, int x, int y) {
//	vector<int> sum;
//	vector<int> st;
//	int temp_mn=0;
//	int temp_ze=0;
//	int temp_on=0;
//	if (a == 1) {
//		if (arr[x][y] == -1) {
//			minus_one++;
//		}
//		else if (arr[x][y] == 0) {
//			zero++;
//		}
//		else {
//			one++;
//		}
//		sum.push_back(arr[x][y]);
//		return sum;
//	}
//
//
//	
//	st.push_back((re(a / 3, x, y)).front());
//	st.push_back(re(a / 3, x, y + a / 3).front());
//	st.push_back(re(a / 3, x, y + (2 * (a / 3))).front());
//
//	st.push_back(re(a / 3, x + a / 3, y).front());
//	st.push_back(re(a / 3, x + a / 3, y + a / 3).front());
//	st.push_back(re(a / 3, x + a / 3, y + (2 * (a / 3))).front());
//
//
//	st.push_back(re(a / 3, x + (2 * (a / 3)), y).front());
//	st.push_back(re(a / 3, x + (2 * (a / 3)), y + a / 3).front());
//	st.push_back(re(a / 3, x + (2 * (a / 3)), y + (2 * (a / 3))).front());
//
//	
//
//	for (int i = 0; i < 9; i++) {
//		if (st[i] == 1) {
//			temp_on++;
//		}
//		else if (st[i] == 0) {
//			temp_ze++;
//		}
//		else {
//			temp_mn++;
//		}
//	}
//
//	//cout << "a == " << a << "마이너스 = " <<minus_one <<" 제로= " << zero << " 원 = " << one << "\n";
//	//cout << "a == " << a << "마이너스 = " << temp_mn << " 제로= " << temp_ze << " 원 = " << temp_on << "\n";
//
//	if (temp_mn == 9) {
//		minus_one -= 8;
//		sum.push_back(-1);
//		return sum;
//	}
//	else if (temp_ze == 9) {
//		zero -= 8;
//		sum.push_back(0);
//		return sum;
//	}
//	else if (temp_on == 9) {
//		one -= 8;
//		sum.push_back(1);
//		return sum;
//	}
//	else {
//		
//		//if (a == save) {
//		//	if (save == 3) {
//		//		minus_one += temp_mn;
//		//		zero += temp_ze;
//		//		one += temp_on;
//		//	}
//		//	else {
//		//		return st;
//		//	}
//		//	return st;
//		//}
//		//minus_one += temp_mn;
//		//zero += temp_ze;
//		//one += temp_on;
//		return st;
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
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a;
//	cin >> a;
//	save = a;
//	
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= a; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	re(a, 1, 1);
//	cout << minus_one << "\n" << zero << "\n" << one;
//
//
//}