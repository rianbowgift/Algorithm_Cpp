//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수
//
//// mid = (st+en)/2라고 할 때 arr[st:mid], arr[mid:en]은 이미 정렬이 되어있는 상태일 때 arr[st:mid]와 arr[mid:en]을 합친다.
//void merge(int st, int en) {    //머지소트의 합치는부분
//    int mid = (st + en) / 2;
//    int lidx = st; // arr[st:mid]에서 값을 보기 위해 사용하는 index
//    int ridx = mid; // arr[mid:en]에서 값을 보기 위해 사용하는 index
//    for (int i = st; i < en; i++) {
//        if (ridx == en) tmp[i] = arr[lidx++];           //만약 en쪽이 처리가끝났다면 무지성 st만붙이기
//        else if (lidx == mid) tmp[i] = arr[ridx++]; //만약 st쪽이 처리가끝났다면 무지성 en만붙이기
//        else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];      //일반적인경우 한쪽이다안끝났다면 더작은값을 tmp에복사
//        else tmp[i] = arr[ridx++];          //위와같음
//    }
//    for (int i = st; i < en; i++) arr[i] = tmp[i]; // tmp에 임시저장해둔 값을 a로 다시 옮김
//}
////이해안가면 https://www.youtube.com/watch?v=ctkuGoJPmAE&ab_channel=%EB%8F%99%EB%B9%88%EB%82%98 참고
//
//
//// a[st:en]을 정렬하고 싶다.
//void merge_sort(int st, int en) {   //머지소트의 나누는부분
//    if (en == st + 1) return; // 리스트의 길이가 1인 경우 //이떄 st+1이 조건인이유는 n이 "전체길이" 이기때문. 즉 전체길이는 1,2로 카운트, st는 0,1 카운트
//    int mid = (st + en) / 2;
//    merge_sort(st, mid); // arr[st:mid]을 정렬한다.
//    merge_sort(mid, en); // arr[mid:en]을 정렬한다.
//    merge(st, en); // arr[st:mid]와 arr[mid:en]을 합친다.
//}
//
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    merge_sort(0, n);
//    for (int i = 0; i < n; i++) cout << arr[i] << ' '; // -53 3 12 15 16 22 23 25 46 357
//}