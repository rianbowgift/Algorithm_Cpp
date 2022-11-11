//#include<iostream>
//#include<vector>
//
//using namespace std;
//int tmp[1001];
//
//
//void merge(int st, int en,vector<int> &vec) {    //머지소트의 합치는부분
//	
//    int mid = (st + en) / 2;
//    int lidx = st; // arr[st:mid]에서 값을 보기 위해 사용하는 index
//    int ridx = mid; // arr[mid:en]에서 값을 보기 위해 사용하는 index
//    for (int i = st; i < en; i++) {
//        if (ridx == en) tmp[i] = vec[lidx++];           //만약 en쪽이 처리가끝났다면 무지성 st만붙이기
//        else if (lidx == mid) tmp[i] = vec[ridx++]; //만약 st쪽이 처리가끝났다면 무지성 en만붙이기
//        else if (vec[lidx] >= vec[ridx]) tmp[i] = vec[lidx++];      //일반적인경우 한쪽이다안끝났다면 더작은값을 tmp에복사
//        else tmp[i] = vec[ridx++];          //위와같음
//    }
//    for (int i = st; i < en; i++) vec[i] = tmp[i]; // tmp에 임시저장해둔 값을 a로 다시 옮김
//}
//
//
//// a[st:en]을 정렬하고 싶다.
//void merge_sort(int st, int en,vector<int> &vec) {   //머지소트의 나누는부분
//    if (en == st + 1) return; // 리스트의 길이가 1인 경우 //이떄 st+1이 조건인이유는 n이 "전체길이" 이기때문. 즉 전체길이는 1,2로 카운트, st는 0,1 카운트
//    int mid = (st + en) / 2;
//    merge_sort(st, mid,vec); // arr[st:mid]을 정렬한다.
//    merge_sort(mid, en,vec); // arr[mid:en]을 정렬한다.
//    merge(st, en,vec); // arr[st:mid]와 arr[mid:en]을 합친다.
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	vector<int> price;
//	vector<int> per;
//	int n, m;
//	int sum = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		price.push_back(temp);
//	}
//
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int temp;
//		cin >> temp;
//		per.push_back(temp);
//	}
//	merge_sort(0,n,price);
//	merge_sort(0, m, per);
//	
//	for (int i = 0; i < n; i++) {
//		if (i < m) { //쿠폰남아있으면
//			sum += price[i] * ((100 - per[i]) * 0.01);
//		}
//		else {
//			sum += price[i];
//		}
//	}
//
//	cout << sum;
//
//	// 926000 이 나와야 합니다.
//}
//
//
//
//
//
