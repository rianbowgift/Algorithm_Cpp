//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//int solution(int a, int b, int c) {
//    int answer = 0;
//    vector<int> arr;
//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
//    sort(arr.begin(), arr.end());
//
//    if (arr[0] != arr[1] && arr[1] != arr[2]) {
//        answer = a + b + c;
//    }
//    else if ((arr[0] == arr[1] && arr[1] != arr[2]) || (arr[0] != arr[1] && arr[1] == arr[2])) {
//        answer = (a + b + c) * ((a * a) + (b * b) + (c * c));
//    }
//    else {
//        answer = (a + b + c) * ((a * a) + (b * b) + (c * c)) * ((a * a * a) + (b * b * b) + (c * c * c));
//    }
//    return answer;
//}