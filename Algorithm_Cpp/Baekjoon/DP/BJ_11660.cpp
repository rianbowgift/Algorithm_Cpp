//#include<iostream>
//#include<vector>
//using namespace std;
//
//int arr[1050][1050];
//				//x,y
//vector<vector<pair<int, int>>>sum;
////int sum[10000][pair<int,int>];
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n,m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//
//
//
//
//
//	//y 가로0번쨰 채우기
//
//
//	
//
//	//초기값 채우기
//
//	//이중백터에 값을넣을때 순서!!
//
//	//1.arr[0]을 만들어준다
//		//sum.push_back({});
//	//2.arr[0][0]을 만들어준다
//		//sum[0].push_back({});
//	//3.arr[0][0]에 값을 넣어준다(실제 값을넣는 단계)
//	for (int i = 0; i < n; i++) {
//		sum.push_back({});
//		sum[i].push_back({});
//		sum[i][0].second = arr[i][0];
//	}
//	for (int i = 0; i < n; i++) {
//		sum[0].push_back({});
//		sum[0][i].first = arr[0][i];
//	}
//
//		//sum[0][0].first = arr[0][0];
//		//sum[0][0].second = arr[0][0];
//
//	//1번과 2번단계를 꼭 해야한다(안하면 오류)
//
//
//
//	
//	//가로줄 채우기 //시간복잡도 n^2
//	for (int i = 0; i < n; i++) {
//
//		//sum.push_back({});
//
//		for (int j = 1; j < n; j++) {
//			if (i != 0) {
//				sum[i].push_back({});
//			}
//			int second = sum[i][j - 1].second + arr[i][j];
//			sum[i][j].second = second;
//		}
//	}
//
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 1; j < n; j++) {
//	//		int first = sum[j-1][i].first + arr[i][j];
//	//		sum[j][i].first = first;
//	//	}
//	//}
//
//
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cout << sum[i][j].first << " ";
//	//	}
//	//	cout << "\n";
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cout << sum[i][j].second << " ";
//	//	}
//	//	cout << "\n";
//	//}
//
//	//cout << "\n";
//
//
//	for (int k = 0; k < m; k++) {
//
//		int x1, y1,x2,y2;
//		cin >> x1 >> y1>>x2>>y2;
//		
//		int y = 0;
//
//		for (int i = x1; i < x2+1; i++) {
//			int y_temp = 0;
//			if (y1 == 1) {
//				y_temp = sum[i - 1][y2 - 1].second;
//			}
//			else {
//				y_temp = sum[i - 1][y2 - 1].second - sum[i - 1][y1 - 2].second;
//			}
//			
//			y += y_temp;
//
//		}
//
//		cout << y << "\n";
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
//
//
//
//
//
//
//}